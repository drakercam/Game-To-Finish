#include "StateMachine.hpp"

namespace Draker {

    void StateMachine::AddState(StateRef newState, bool isReplacing) {
        this->isAdding_ = true;
        this->isReplacing_ = isReplacing;

        this->newState_ = std::move(newState);
    }

    void StateMachine::RemoveState() {
        this->isRemoving_ = true;
    }

    void StateMachine::ProcessStateChanges() {
        if (this->isRemoving_ && !this->states_.empty()) {
            this->states_.pop();

            if (!states_.empty()) {
                this->states_.top()->Resume();
            }

            this->isRemoving_ = false;
        }

        if (this->isAdding_) {
            if (!this->states_.empty()) {

                if (this->isReplacing_) {
                    this->states_.pop();
                }
                else {
                    this->states_.top()->Pause();
                }
            }

            this->states_.push(std::move(this->newState_));
            this->states_.top()->Init();
            this->isAdding_ = false;
        }
    }

    StateRef &StateMachine::GetActiveState() {
        return this->states_.top();
    }
}
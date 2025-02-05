#pragma once

#include <memory>
// state machine will run of a stack, top state is running and can be popped off
#include <stack>

#include "State.hpp"

namespace Draker {
    
    typedef std::unique_ptr<State> StateRef;

    class StateMachine {
        public:
            StateMachine() { }
            ~StateMachine() { }

            // add new state to the stack
            void AddState(StateRef newState, bool isReplacing = true);
            void RemoveState();

            // runs at the beginning of each loop in the game.cpp file
            void ProcessStateChanges();

            StateRef &GetActiveState();

        private:
            std::stack<StateRef> states_;
            StateRef newState_;

            bool isRemoving_;
            bool isAdding_;
            bool isReplacing_;
    };
}

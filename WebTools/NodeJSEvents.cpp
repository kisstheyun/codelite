#include "NodeJSEvents.h"

wxDEFINE_EVENT(wxEVT_NODEJS_DEBUGGER_INTERACT, clDebugEvent);
wxDEFINE_EVENT(wxEVT_NODEJS_DEBUGGER_MARK_LINE, clDebugEvent);
wxDEFINE_EVENT(wxEVT_NODEJS_DEBUGGER_CONSOLE_LOG, clDebugEvent);
wxDEFINE_EVENT(wxEVT_NODEJS_DEBUGGER_EXCEPTION_THROWN, clDebugEvent);
wxDEFINE_EVENT(wxEVT_NODEJS_DEBUGGER_UPDATE_BREAKPOINTS_VIEW, clDebugEvent);
wxDEFINE_EVENT(wxEVT_NODEJS_DEBUGGER_UPDATE_CONSOLE, clDebugEvent);
wxDEFINE_EVENT(wxEVT_NODEJS_DEBUGGER_EVAL_RESULT, clDebugRemoteObjectEvent);
wxDEFINE_EVENT(wxEVT_NODEJS_DEBUGGER_CREATE_OBJECT, clDebugRemoteObjectEvent);
wxDEFINE_EVENT(wxEVT_NODEJS_DEBUGGER_OBJECT_PROPERTIES, clDebugEvent);
wxDEFINE_EVENT(wxEVT_NODEJS_DEBUGGER_LOCAL_OBJECT_PROPERTIES, clDebugEvent);

wxDEFINE_EVENT(wxEVT_NODEJS_DEBUGGER_STARTED, clDebugEvent);
wxDEFINE_EVENT(wxEVT_NODEJS_DEBUGGER_STOPPED, clDebugEvent);
wxDEFINE_EVENT(wxEVT_NODEJS_DEBUGGER_FINISHED, clDebugEvent);
wxDEFINE_EVENT(wxEVT_NODEJS_DEBUGGER_UPDATE_CALLSTACK, clDebugCallFramesEvent);

//// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
//// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
//// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
//// PARTICULAR PURPOSE.
////
//// Copyright (c) Microsoft Corporation. All rights reserved

#pragma once

namespace GameConstants
{

    static const float TouchRectangleSize       = 300.0f;

    static const float HudSafeWidth             = 300.0f;
    static const float HudRightOffset           = 250.0f;
    static const float HudTopOffset             = 50.0f;
    static const float Margin                   = 5.0f;
    static const float HudBodyPointSize         = 24.0f;
    static const float HudTitleHeaderPointSize  = 16.0f;
    static const float HudTitleBodyPointSize    = 36.0f;
    static const float HudLicensePointSize      = 20.0f;

    static const int InitialLoadingDelay        = 2000;     // Number of ms to wait before completion of initial load.
    static const int LevelLoadingDelay          = 500;      // Number of ms to wait before completion of level load.

    namespace Physics
    {
        static const float FrameLength          = 0.003f;   // The duration of a frame for physics handling when the graphics frame length is too long.
    }

	enum Behavior{ Easy = 0, Angry, Smart};
	enum ManeuverState{ Walk = 0, Dodge, Push};
};

﻿/*
* This source file is part of ArkGameFrame
* For the latest info, see https://github.com/ArkGame
*
* Copyright (c) 2013-2018 ArkGame authors.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
*/

#include "AFKernelPlugin.h"
#include "AFCKernelModule.h"
#include "AFCClassModule.h"
#include "AFCConfigModule.h"
#include "AFCSceneModule.h"

namespace ark
{

    ARK_DLL_PLUGIN_ENTRY(AFKernelPlugin)
    ARK_DLL_PLUGIN_EXIT(AFKernelPlugin)

    //////////////////////////////////////////////////////////////////////////

    int AFKernelPlugin::GetPluginVersion()
    {
        return 0;
    }

    const std::string AFKernelPlugin::GetPluginName()
    {
        return GET_CLASS_NAME(AFKernelPlugin);
    }

    void AFKernelPlugin::Install()
    {
        RegisterModule< AFIClassModule, AFCClassModule>();
        RegisterModule< AFIConfigModule, AFCConfigModule>();
        RegisterModule< AFIKernelModule, AFCKernelModule>();
        RegisterModule< AFISceneModule, AFCSceneModule>();
    }

    void AFKernelPlugin::Uninstall()
    {
        DeregisterModule<AFISceneModule, AFCSceneModule>();
        DeregisterModule<AFIKernelModule, AFCKernelModule>();
        DeregisterModule<AFIConfigModule, AFCConfigModule>();
        DeregisterModule<AFIClassModule, AFCClassModule>();
    }

}
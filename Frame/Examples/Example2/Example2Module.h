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

#pragma once

#include "SDK/Interface/AFIPlugin.h"
#include "SDK/Interface/AFIPluginManager.h"

namespace ark
{

    class Example2Module : public AFIModule
    {
    public:
        explicit Example2Module() = default;

        bool Init() override;
        bool PostInit() override;
        bool PreShut() override;
        bool Shut() override;

    protected:
        int OnDataNodeCB(const AFGUID& self, const std::string& strProperty, const AFIData& oldVarList, const AFIData& newVarList);
    };

}
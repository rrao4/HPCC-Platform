/*##############################################################################

    HPCC SYSTEMS software Copyright (C) 2012 HPCC Systems®.

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
############################################################################## */

#ifndef ROXIESTREAM_HPP
#define ROXIESTREAM_HPP

#include "thorhelper.hpp"
#include "rtlds_imp.hpp"
#include "jio.hpp"

//---------------------------------------------------
// Base classes for all Roxie/HThor/Thor input streams
//---------------------------------------------------

interface THORHELPER_API IEngineRowStream : public IRowStream //base for IInputBase and IHThorSimpleInput
{
    virtual bool nextGroup(ConstPointerArray & group);      // note: default implementation can be overridden for efficiency...
    virtual void readAll(RtlLinkedDatasetBuilder &builder); // note: default implementation can be overridden for efficiency...
};

#endif // ROXIESTREAM_HPP

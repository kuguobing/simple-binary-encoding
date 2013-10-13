/*
 * Copyright 2013 Real Logic Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef _ONNEXT_H_
#define _ONNEXT_H_

#include "otf_api/Field.h"

namespace sbe {
namespace on_the_fly {

class OnNext
{
public:
    virtual int onNext(const Field &field) = 0;
};

} // namepsace on_the_fly

} // namespace sbe

#endif /* _ONNEXT_H_ */
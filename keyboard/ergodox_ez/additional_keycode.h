//    Copyright 2016 Yoshi Yamaguchi
// 
//    Licensed under the Apache License, Version 2.0 (the "License");
//    you may not use this file except in compliance with the License.
//    You may obtain a copy of the License at
// 
//        http://www.apache.org/licenses/LICENSE-2.0
// 
//    Unless required by applicable law or agreed to in writing, software
//    distributed under the License is distributed on an "AS IS" BASIS,
//    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//    See the License for the specific language governing permissions and
//    limitations under the License.

/*
 * additional keycode added by ymotongpoo.
 */

#ifndef ADDITIONAL_KEYCODE_H
#define ADDITIONAL_KEYCODE_H

#include "keymap_common.h"

#define CTLKC_T(kc1, kc2) (kc2 | 0x7000 | ((CTL(kc1) & 0xF) << 8))
#define GUIKC_T(kc1, kc2) (kc2 | 0x7000 | ((GUI(kc1) & 0xF) << 8))

#endif
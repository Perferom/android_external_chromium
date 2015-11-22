// Copyright 2008 Google Inc.
// Author: Lincoln Smith
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <config.h>
#include <stdlib.h>  // exit
#include "logging.h"

namespace open_vcdiff {

bool g_fatal_error_occurred = false;

static void DefaultExitFatal() { exit(1); }
void (*ExitFatal)() = &DefaultExitFatal;

}  // namespace open_vcdiff

// Copyright (C) Intel Corp.  2018.  All Rights Reserved.

// Permission is hereby granted, free of charge, to any person obtaining
// a copy of this software and associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to
// permit persons to whom the Software is furnished to do so, subject to
// the following conditions:

// The above copyright notice and this permission notice (including the
// next paragraph) shall be included in all copies or substantial
// portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
// IN NO EVENT SHALL THE COPYRIGHT OWNER(S) AND/OR ITS SUPPLIERS BE
// LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
// OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
// WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

//  **********************************************************************/
//  * Authors:
//  *   Mark Janes <mark.a.janes@intel.com>
//  **********************************************************************/

#include "glframe_metrics_amd_gpa.hpp"

#include <GL/gl.h>
#include <GL/glext.h>

#include <map>
#include <string>
#include <vector>

#include "glretrace.hpp"

#include "glframe_traits.hpp"

using glretrace::MetricId;
using glretrace::ExperimentId;
using glretrace::SelectionId;
using glretrace::OnFrameRetrace;
using glretrace::RenderId;
using glretrace::PerfMetricsAMDGPA;
using glretrace::PerfContext;
using glretrace::NoAssign;
using glretrace::NoCopy;
using glretrace::ID_PREFIX_MASK;

PerfMetricsAMDGPA::PerfMetricsAMDGPA(OnFrameRetrace *cb) {
}

PerfMetricsAMDGPA::~PerfMetricsAMDGPA() {
}

int PerfMetricsAMDGPA::groupCount() const {
  return 0;
}

void PerfMetricsAMDGPA::selectMetric(MetricId metric) {
}

void PerfMetricsAMDGPA::selectGroup(int index) {
}

void PerfMetricsAMDGPA::begin(RenderId render) {
}
void PerfMetricsAMDGPA::end() {
}
void PerfMetricsAMDGPA::publish(ExperimentId experimentCount,
                                SelectionId selectionCount,
                                OnFrameRetrace *callback) {
}

void
PerfMetricsAMDGPA::beginContext() {
}

void
PerfMetricsAMDGPA::endContext() {
}


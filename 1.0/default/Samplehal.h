#ifndef RAJATGUPTA1998_HARDWARE_SAMPLEHAL_V1_0_SAMPLEHAL_H
#define RAJATGUPTA1998_HARDWARE_SAMPLEHAL_V1_0_SAMPLEHAL_H

#include <rajatgupta1998/hardware/samplehal/1.0/ISamplehal.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>

namespace rajatgupta1998 {
namespace hardware {
namespace samplehal {
namespace V1_0 {
namespace implementation {

using ::android::hardware::hidl_array;
using ::android::hardware::hidl_memory;
using ::android::hardware::hidl_string;
using ::android::hardware::hidl_vec;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::sp;

struct Samplehal : public ISamplehal {
    // Methods from ::rajatgupta1998::hardware::samplehal::V1_0::ISamplehal follow.
    Return<uint32_t> getVersion() override;

    // Methods from ::android::hidl::base::V1_0::IBase follow.

};

// FIXME: most likely delete, this is only for passthrough implementations
// extern "C" ISamplehal* HIDL_FETCH_ISamplehal(const char* name);

}  // namespace implementation
}  // namespace V1_0
}  // namespace samplehal
}  // namespace hardware
}  // namespace rajatgupta1998

#endif  // RAJATGUPTA1998_HARDWARE_SAMPLEHAL_V1_0_SAMPLEHAL_H

#include "Samplehal.h"

namespace rajatgupta1998 {
namespace hardware {
namespace samplehal {
namespace V1_0 {
namespace implementation {

// Methods from ::rajatgupta1998::hardware::samplehal::V1_0::ISamplehal follow.
Return<uint32_t> Samplehal::getVersion() {
    // TODO implement
    return uint32_t {};
}


// Methods from ::android::hidl::base::V1_0::IBase follow.

//ISamplehal* HIDL_FETCH_ISamplehal(const char* /* name */) {
    //return new Samplehal();
//}
//
}  // namespace implementation
}  // namespace V1_0
}  // namespace samplehal
}  // namespace hardware
}  // namespace rajatgupta1998

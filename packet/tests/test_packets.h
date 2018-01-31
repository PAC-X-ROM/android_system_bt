#pragma once

namespace {

// L2CAP packet pulled from Wireshark
std::vector<uint8_t> test_l2cap_data = {
    0x02, 0xdc, 0x2e, 0x66, 0x00, 0x62, 0x00, 0x13, 0x00, 0x0a, 0x00, 0x00,
    0x00, 0x01, 0x00, 0xb8, 0x9c, 0x00, 0x80, 0x56, 0x00, 0x43, 0xc4, 0x9a,
    0x86, 0x36, 0x10, 0x00, 0x26, 0x43, 0x1c, 0x9b, 0x88, 0x1d, 0x06, 0x03,
    0x26, 0x86, 0x36, 0x10, 0x00, 0x26, 0x43, 0xb4, 0x9b, 0x88, 0x1d, 0x06,
    0x03, 0x26, 0x86, 0x36, 0x10, 0x00, 0x26, 0x43, 0xe4, 0x9b, 0x88, 0x1d,
    0x06, 0x03, 0x26, 0x86, 0x36, 0x10, 0x00, 0x26, 0x43, 0xf8, 0x9b, 0x88,
    0x1d, 0x06, 0x03, 0x26, 0x86, 0x36, 0x10, 0x00, 0x26, 0x43, 0x08, 0x9c,
    0x88, 0x1d, 0x06, 0x03, 0x26, 0x86, 0x36, 0x10, 0x00, 0x26, 0x43, 0xa8,
    0x9c, 0x88, 0x1d, 0x06, 0x03, 0x26, 0x86, 0x36, 0x10, 0x00, 0x26};

// AVCTP packet pulled from Wireshark
std::vector<uint8_t> test_avctp_data = {
    0xf2, 0x11, 0x0e, 0x0c, 0x48, 0x00, 0x00, 0x19, 0x58, 0x20, 0x00, 0x00,
    0x85, 0x07, 0x00, 0x00, 0x00, 0x01, 0x00, 0x6a, 0x00, 0x22, 0x57, 0x61,
    0x72, 0x20, 0x50, 0x69, 0x67, 0x73, 0x20, 0x28, 0x32, 0x30, 0x30, 0x39,
    0x20, 0x52, 0x65, 0x6d, 0x61, 0x73, 0x74, 0x65, 0x72, 0x65, 0x64, 0x20,
    0x56, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x29, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x6a, 0x00, 0x0d, 0x42, 0x6c, 0x61, 0x63, 0x6b, 0x20, 0x53, 0x61,
    0x62, 0x62, 0x61, 0x74, 0x68, 0x00, 0x00, 0x00, 0x03, 0x00, 0x6a, 0x00,
    0x17, 0x54, 0x68, 0x65, 0x20, 0x55, 0x6c, 0x74, 0x69, 0x6d, 0x61, 0x74,
    0x65, 0x20, 0x43, 0x6f, 0x6c, 0x6c, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e,
    0x00, 0x00, 0x00, 0x04, 0x00, 0x6a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
    0x00, 0x6a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x6a, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x07, 0x00, 0x6a, 0x00, 0x06, 0x34, 0x37, 0x33, 0x30,
    0x30, 0x30};

// An avrcp packet pulled from wireshark. This data is the payload of
// test_avctp_packet
size_t test_avctp_data_payload_offset = 3;
std::vector<uint8_t> test_avrcp_data = {
    0x0c, 0x48, 0x00, 0x00, 0x19, 0x58, 0x20, 0x00, 0x00, 0x85, 0x07, 0x00,
    0x00, 0x00, 0x01, 0x00, 0x6a, 0x00, 0x22, 0x57, 0x61, 0x72, 0x20, 0x50,
    0x69, 0x67, 0x73, 0x20, 0x28, 0x32, 0x30, 0x30, 0x39, 0x20, 0x52, 0x65,
    0x6d, 0x61, 0x73, 0x74, 0x65, 0x72, 0x65, 0x64, 0x20, 0x56, 0x65, 0x72,
    0x73, 0x69, 0x6f, 0x6e, 0x29, 0x00, 0x00, 0x00, 0x02, 0x00, 0x6a, 0x00,
    0x0d, 0x42, 0x6c, 0x61, 0x63, 0x6b, 0x20, 0x53, 0x61, 0x62, 0x62, 0x61,
    0x74, 0x68, 0x00, 0x00, 0x00, 0x03, 0x00, 0x6a, 0x00, 0x17, 0x54, 0x68,
    0x65, 0x20, 0x55, 0x6c, 0x74, 0x69, 0x6d, 0x61, 0x74, 0x65, 0x20, 0x43,
    0x6f, 0x6c, 0x6c, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x6a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x6a, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x6a, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x07, 0x00, 0x6a, 0x00, 0x06, 0x34, 0x37, 0x33, 0x30, 0x30, 0x30};

}  // namespace
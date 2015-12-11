// Copyright (c) 2015 NoFutzNetworks Inc., All Rights Reserved
// Author: Lazaros Koromilas <l@nofutznetworks.com>
#ifndef OVS_NF_MBUF_H_
#define OVS_NF_MBUF_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

struct nf_mbuf {
  void *buf_addr;
  uint16_t buf_len;
  uint16_t data_off;
  uint16_t data_len;
  uint32_t pkt_len;
  struct {
    uint32_t rss;
  } hash;
};

#ifdef __cplusplus
}
#endif

#endif  // OVS_NF_MBUF_H_

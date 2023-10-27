/* SPDX-License-Identifier: GPL-2.0-only */
/*  OpenVPN data channel accelerator
 *
 *  Copyright (C) 2020-2023 OpenVPN, Inc.
 *
 *  Author:	Antonio Quartulli <antonio@openvpn.net>
 */

#ifndef _NET_OVPN_NETLINK_H_
#define _NET_OVPN_NETLINK_H_

struct ovpn_struct;
struct ovpn_peer;

int ovpn_nl_init(struct ovpn_struct *ovpn);
int ovpn_nl_register(void);
void ovpn_nl_unregister(void);
int ovpn_nl_send_packet(struct ovpn_struct *ovpn, const struct ovpn_peer *peer,
			     const u8 *buf, size_t len);
int ovpn_nl_notify_del_peer(struct ovpn_peer *peer);
int ovpn_nl_notify_swap_keys(struct ovpn_peer *peer);

#endif /* _NET_OVPN_NETLINK_H_ */
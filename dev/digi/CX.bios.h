/*-
 * Copyright (c) 2001 Brian Somers <brian@Awfulhak.org>
 *                    based on work by Slawa Olhovchenkov
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $FreeBSD$
 */

static const u_char CX_bios[] = {
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x40, 0x28,
  0x23, 0x29, 0x68, 0x6f, 0x73, 0x74, 0x62, 0x69, 0x6f, 0x73, 0x2e, 0x61, 0x73,
  0x6d, 0x09, 0x36, 0x2e, 0x34, 0x20, 0x39, 0x2f, 0x32, 0x30, 0x2f, 0x39, 0x30,
  0x00, 0x43, 0x6f, 0x70, 0x79, 0x72, 0x69, 0x67, 0x68, 0x74, 0x20, 0x28, 0x43,
  0x29, 0x20, 0x31, 0x39, 0x39, 0x30, 0x2c, 0x20, 0x44, 0x69, 0x67, 0x69, 0x42,
  0x6f, 0x61, 0x72, 0x64, 0x20, 0x49, 0x6e, 0x63, 0x2e, 0x9f, 0xf8, 0x9f, 0xf8,
  0x22, 0xf9, 0x9f, 0xf8, 0x9f, 0xf8, 0x9f, 0xf8, 0x9f, 0xf8, 0x9f, 0xf8, 0x9f,
  0xf8, 0x9f, 0xf8, 0xab, 0xf8, 0xab, 0xf8, 0xab, 0xf8, 0xc5, 0xf8, 0xab, 0xf8,
  0xab, 0xf8, 0x9f, 0xf8, 0x9f, 0xf8, 0xab, 0xf8, 0xab, 0xf8, 0x9f, 0xf8, 0xc2,
  0xf8, 0x9f, 0xf8, 0x9f, 0xf8, 0x9f, 0xf8, 0x9f, 0xf8, 0x9f, 0xf8, 0x9f, 0xf8,
  0x9f, 0xf8, 0x9f, 0xf8, 0x9f, 0xf8, 0x9f, 0xf8, 0x9f, 0xf8, 0x84, 0x00, 0x80,
  0x00, 0x00, 0x00, 0x1e, 0x2e, 0x8e, 0x1e, 0x9d, 0xf8, 0xfe, 0x06, 0x83, 0x00,
  0x1f, 0xcf, 0x1e, 0x50, 0x52, 0x2e, 0x8e, 0x1e, 0x9d, 0xf8, 0xfe, 0x06, 0x84,
  0x00, 0xb8, 0x00, 0x80, 0xba, 0x22, 0xff, 0xef, 0x5a, 0x58, 0x1f, 0xcf, 0xb4,
  0x80, 0xcf, 0x60, 0x06, 0x1e, 0x2e, 0x8e, 0x1e, 0x9d, 0xf8, 0xfe, 0x06, 0x80,
  0x00, 0xba, 0x84, 0x00, 0xb0, 0x03, 0xee, 0x90, 0x90, 0xec, 0x08, 0x06, 0x81,
  0x00, 0xa8, 0x08, 0x74, 0x09, 0xba, 0x84, 0x00, 0xb0, 0x10, 0xee, 0xeb, 0x25,
  0x90, 0xa8, 0x01, 0x74, 0x09, 0xba, 0x80, 0x00, 0xb0, 0x10, 0xee, 0xeb, 0x18,
  0x90, 0xa8, 0x20, 0x74, 0x09, 0xba, 0x84, 0x00, 0xb0, 0x30, 0xee, 0xeb, 0x0b,
  0x90, 0xa8, 0x04, 0x74, 0x06, 0xba, 0x80, 0x00, 0xb0, 0x30, 0xee, 0xba, 0x80,
  0x00, 0xb0, 0x38, 0xee, 0x90, 0x90, 0xba, 0x22, 0xff, 0xb8, 0x00, 0x80, 0xef,
  0x1f, 0x07, 0x61, 0xcf, 0x60, 0x1e, 0x06, 0xfc, 0x2e, 0x8e, 0x06, 0x9d, 0xf8,
  0x2e, 0x8e, 0x1e, 0x9d, 0xf8, 0x8d, 0x36, 0x40, 0x00, 0xad, 0x3c, 0x3f, 0x7f,
  0x22, 0x3c, 0x1f, 0x7f, 0x22, 0x32, 0xe4, 0xd1, 0xe0, 0x3d, 0x16, 0x00, 0x90,
  0x73, 0x14, 0xbb, 0x63, 0xf9, 0x03, 0xd8, 0x2e, 0xff, 0x17, 0x8d, 0x36, 0x40,
  0x00, 0xb0, 0x00, 0x89, 0x04, 0x07, 0x1f, 0x61, 0xcf, 0xb4, 0x80, 0xeb, 0xf0,
  0xcd, 0x15, 0xeb, 0xec, 0x79, 0xf9, 0xad, 0xf9, 0xed, 0xf9, 0xf0, 0xf9, 0xf5,
  0xf9, 0xfe, 0xf9, 0x06, 0xfa, 0x0f, 0xfa, 0x17, 0xfa, 0x1a, 0xfa, 0x47, 0xfa,
  0x1e, 0xac, 0x3c, 0x00, 0x75, 0x09, 0xe4, 0x00, 0x0c, 0x01, 0xe6, 0x00, 0xeb,
  0x1e, 0x90, 0x3c, 0x01, 0x75, 0x09, 0xe4, 0x00, 0x24, 0xfe, 0xe6, 0x00, 0xeb,
  0x11, 0x90, 0x3c, 0x02, 0x75, 0x10, 0xe4, 0x00, 0x24, 0xfe, 0xe6, 0x00, 0xf6,
  0xec, 0x0c, 0x01, 0xe6, 0x00, 0xb4, 0x00, 0x1f, 0xc3, 0xb4, 0x80, 0x1f, 0xc3,
  0x1e, 0xad, 0x8b, 0xd8, 0xad, 0x8e, 0xdb, 0x8b, 0xf0, 0x33, 0xdb, 0x8b, 0x07,
  0x3d, 0x4f, 0x53, 0x75, 0x2a, 0x8a, 0x47, 0x02, 0x32, 0xe4, 0x86, 0xc4, 0x8b,
  0xc8, 0x32, 0xc0, 0x02, 0x07, 0x43, 0xe2, 0xfb, 0x0a, 0xc0, 0x75, 0x16, 0x8c,
  0xd9, 0x1f, 0x89, 0x0e, 0x2e, 0x00, 0x89, 0x36, 0x2c, 0x00, 0x8d, 0x1e, 0x02,
  0x00, 0xc7, 0x07, 0x45, 0x4d, 0x32, 0xe4, 0xc3, 0x1f, 0xb4, 0x80, 0xc3, 0xb4,
  0x80, 0xc3, 0xea, 0xf0, 0xff, 0x00, 0xf0, 0xad, 0x8b, 0xd0, 0xec, 0x88, 0x04,
  0x32, 0xe4, 0xc3, 0xad, 0x8b, 0xd0, 0xac, 0xee, 0x32, 0xe4, 0xc3, 0xad, 0x8b,
  0xd0, 0xed, 0x89, 0x04, 0x32, 0xe4, 0xc3, 0xad, 0x8b, 0xd0, 0xad, 0xef, 0x32,
  0xe4, 0xc3, 0xb4, 0x80, 0xc3, 0xac, 0x3c, 0x02, 0x7f, 0x25, 0xfe, 0xc8, 0x32,
  0xe4, 0xd1, 0xe0, 0x8d, 0x1e, 0x99, 0xf8, 0x03, 0xd8, 0x2e, 0x8b, 0x17, 0xec,
  0xac, 0x3c, 0x0f, 0x7f, 0x10, 0x3c, 0x00, 0x74, 0x03, 0xee, 0x90, 0x90, 0xec,
  0x8b, 0xfe, 0x1e, 0x07, 0xaa, 0x32, 0xe4, 0xc3, 0xb4, 0x80, 0xc3, 0xac, 0x3c,
  0x02, 0x7f, 0x1f, 0xfe, 0xc8, 0x32, 0xe4, 0xd1, 0xe0, 0x8d, 0x1e, 0x99, 0xf8,
  0x03, 0xd8, 0x2e, 0x8b, 0x17, 0xec, 0xac, 0x3c, 0x0f, 0x7f, 0x0a, 0x3c, 0x00,
  0x74, 0x01, 0xee, 0xac, 0xee, 0x32, 0xe4, 0xc3, 0xb4, 0x80, 0xc3, 0xfc, 0x8e,
  0xc0, 0xb8, 0xff, 0xff, 0x8b, 0xcb, 0x33, 0xff, 0xf3, 0xab, 0x8b, 0xcb, 0x33,
  0xff, 0xf3, 0xaf, 0xe3, 0x01, 0xc3, 0xb8, 0xaa, 0xaa, 0x8b, 0xcb, 0x33, 0xff,
  0xf3, 0xab, 0x8b, 0xcb, 0x33, 0xff, 0xf3, 0xaf, 0xe3, 0x01, 0xc3, 0xb8, 0x55,
  0x55, 0x8b, 0xcb, 0x33, 0xff, 0xf3, 0xab, 0x8b, 0xcb, 0x33, 0xff, 0xf3, 0xaf,
  0xe3, 0x01, 0xc3, 0x33, 0xc0, 0x8b, 0xcb, 0x33, 0xff, 0xf3, 0xab, 0x8b, 0xcb,
  0x33, 0xff, 0xf3, 0xaf, 0xc3, 0xba, 0x01, 0x02, 0xb0, 0x0d, 0xee, 0xb0, 0x00,
  0xee, 0xba, 0x0b, 0x02, 0xb0, 0x08, 0xee, 0xba, 0x06, 0x02, 0xb0, 0x70, 0xee,
  0xb0, 0x0c, 0xee, 0xba, 0x07, 0x02, 0xb0, 0x0f, 0xee, 0xb0, 0x00, 0xee, 0xba,
  0x0b, 0x02, 0xb0, 0x07, 0xee, 0xba, 0x04, 0x02, 0xb0, 0x50, 0xee, 0xb0, 0x0c,
  0xee, 0xba, 0x05, 0x02, 0xb0, 0x0d, 0xee, 0xb0, 0x00, 0xee, 0xba, 0x0b, 0x02,
  0xb0, 0x0a, 0xee, 0xba, 0x08, 0x02, 0xb0, 0x30, 0xee, 0xba, 0x0e, 0x02, 0xb0,
  0x00, 0xee, 0xba, 0x80, 0x00, 0xb0, 0x0e, 0xee, 0x90, 0x90, 0xb0, 0x17, 0xee,
  0xba, 0x84, 0x00, 0xb0, 0x0e, 0xee, 0x90, 0x90, 0xb0, 0x17, 0xee, 0xfb, 0xb9,
  0x00, 0xf0, 0x51, 0xb9, 0x05, 0x00, 0xe2, 0xfe, 0x59, 0x26, 0xa0, 0x80, 0x00,
  0x3c, 0x04, 0x74, 0x0c, 0xe2, 0xef, 0x26, 0x81, 0x0e, 0x14, 0x00, 0x00, 0x08,
  0xeb, 0x30, 0x90, 0xbb, 0x60, 0x00, 0xb9, 0x0e, 0x00, 0x33, 0xc0, 0x26, 0x8a,
  0x27, 0x3a, 0xc4, 0x75, 0xe7, 0x43, 0xfe, 0xc0, 0xe2, 0xf4, 0xbb, 0x70, 0x00,
  0xb9, 0x0e, 0x00, 0x33, 0xc0, 0x26, 0x8a, 0x27, 0x3a, 0xc4, 0x75, 0xd3, 0x43,
  0xfe, 0xc0, 0xe2, 0xf4, 0x26, 0x81, 0x0e, 0x12, 0x00, 0x00, 0x08, 0x26, 0xa1,
  0x14, 0x00, 0x0d, 0x00, 0x00, 0x75, 0x09, 0xfc, 0x8d, 0x3e, 0x00, 0x00, 0xb8,
  0x47, 0x44, 0xab, 0xb8, 0xff, 0xff, 0xab, 0xab, 0xab, 0xb8, 0x42, 0x49, 0xab,
  0xb8, 0x4f, 0x53, 0xab, 0xb8, 0x45, 0x49, 0x26, 0x80, 0x3e, 0x10, 0x00, 0x03,
  0x74, 0x19, 0xb8, 0x49, 0x53, 0x26, 0x80, 0x3e, 0x10, 0x00, 0x02, 0x74, 0x0e,
  0xb8, 0x4d, 0x43, 0x26, 0x80, 0x3e, 0x10, 0x00, 0x01, 0x74, 0x03, 0xb8, 0xff,
  0xff, 0xab, 0x8d, 0x36, 0xfe, 0xff, 0x8a, 0x04, 0x8d, 0x36, 0xff, 0xff, 0x8a,
  0x24, 0xab, 0x26, 0x81, 0x0e, 0x12, 0x00, 0x00, 0x80, 0x06, 0x1f, 0xa1, 0x2a,
  0x00, 0x40, 0xa3, 0x2a, 0x00, 0xa1, 0x00, 0x00, 0x8b, 0x1e, 0x02, 0x00, 0x3d,
  0x44, 0x47, 0x75, 0x04, 0xff, 0x2e, 0x2c, 0x00, 0x81, 0xfb, 0x45, 0x4d, 0x75,
  0xe3, 0x26, 0x81, 0x0e, 0x12, 0x00, 0x00, 0x20, 0xff, 0x2e, 0x2c, 0x00, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0xb4, 0xd5,
  0x9e, 0x73, 0x4f, 0x7b, 0x4d, 0x79, 0x4b, 0x75, 0x49, 0x9f, 0xb1, 0x05, 0xd2,
  0xec, 0x73, 0x42, 0xb0, 0x40, 0xd0, 0xe0, 0x71, 0x3c, 0x32, 0xe4, 0x9e, 0x76,
  0x37, 0x7a, 0x35, 0x78, 0x33, 0x9f, 0xb1, 0x05, 0xd2, 0xec, 0x72, 0x2c, 0xd0,
  0xe4, 0x70, 0x28, 0xfa, 0xb8, 0xff, 0xff, 0xf9, 0x73, 0x21, 0x8b, 0xd8, 0x8b,
  0xcb, 0x8b, 0xd1, 0x8e, 0xc2, 0x8c, 0xc6, 0x8e, 0xde, 0x8c, 0xdf, 0x8e, 0xd7,
  0x8c, 0xd5, 0x8b, 0xe5, 0x73, 0x07, 0x33, 0xc5, 0x75, 0x07, 0xf8, 0xeb, 0xe3,
  0x0b, 0xc5, 0x74, 0x02, 0xeb, 0xfe, 0xba, 0xa0, 0xff, 0xb8, 0x38, 0xc0, 0xef,
  0xba, 0xa2, 0xff, 0xb8, 0xf8, 0x3f, 0xef, 0xba, 0xa8, 0xff, 0xb8, 0xba, 0xa0,
  0xef, 0xba, 0xa6, 0xff, 0xb8, 0xf8, 0x41, 0xef, 0xba, 0xa4, 0xff, 0xb8, 0x3b,
  0x00, 0xef, 0xe4, 0x00, 0x24, 0x08, 0x74, 0x15, 0xba, 0xe0, 0xff, 0xb8, 0x00,
  0x60, 0xef, 0xba, 0xe2, 0xff, 0xb8, 0x9c, 0x00, 0xef, 0xba, 0xe4, 0xff, 0xb8,
  0x00, 0x80, 0xef, 0x8c, 0xc8, 0x8e, 0xd8, 0xbd, 0xc0, 0x00, 0xbb, 0x00, 0x80,
  0x8c, 0xc8, 0x8e, 0xd0, 0xbc, 0xb6, 0xfc, 0x8b, 0xc5, 0x25, 0x00, 0xf0, 0xe9,
  0xc0, 0xfd, 0xb4, 0x00, 0x74, 0x06, 0xb4, 0xff, 0xeb, 0x02, 0xae, 0xfc, 0x8e,
  0xc5, 0x2e, 0x89, 0x2e, 0x9d, 0xf8, 0x80, 0xfc, 0x00, 0x74, 0x08, 0x26, 0x83,
  0x0e, 0x14, 0x00, 0x01, 0xeb, 0xfe, 0x26, 0x83, 0x0e, 0x12, 0x00, 0x01, 0x26,
  0xc7, 0x06, 0x18, 0x00, 0x40, 0x00, 0xb8, 0x80, 0x00, 0x8e, 0xd0, 0xbc, 0x00,
  0x04, 0x33, 0xc0, 0xe4, 0x00, 0x26, 0xa2, 0x11, 0x00, 0x24, 0x06, 0x75, 0x09,
  0x26, 0xc6, 0x06, 0x10, 0x00, 0x03, 0xeb, 0x25, 0x90, 0x3c, 0x02, 0x75, 0x09,
  0x26, 0xc6, 0x06, 0x10, 0x00, 0x02, 0xeb, 0x18, 0x90, 0x3c, 0x04, 0x75, 0x09,
  0x26, 0xc6, 0x06, 0x10, 0x00, 0x01, 0xeb, 0x0b, 0x90, 0x26, 0xa3, 0x10, 0x00,
  0x26, 0x83, 0x0e, 0x14, 0x00, 0x02, 0x26, 0x83, 0x0e, 0x12, 0x00, 0x02, 0x26,
  0xc7, 0x06, 0x00, 0x00, 0x5a, 0x5a, 0x06, 0xb8, 0xc0, 0xe0, 0x8e, 0xc0, 0x26,
  0xa1, 0x00, 0x00, 0x07, 0x3d, 0x5a, 0x5a, 0x75, 0x24, 0x26, 0x83, 0x0e, 0x12,
  0x00, 0x04, 0xb8, 0x00, 0xf0, 0xbb, 0x00, 0x78, 0x06, 0xe8, 0x27, 0xfd, 0x07,
  0x75, 0x08, 0x26, 0x83, 0x06, 0x18, 0x00, 0x40, 0xeb, 0x06, 0x26, 0x83, 0x0e,
  0x14, 0x00, 0x04, 0xeb, 0x41, 0x90, 0xb9, 0x07, 0x00, 0xb8, 0x00, 0x10, 0xba,
  0x04, 0x00, 0xbb, 0x00, 0x80, 0x3d, 0x00, 0xf0, 0x75, 0x03, 0xbb, 0x00, 0x78,
  0x06, 0x50, 0x51, 0xe8, 0xf9, 0xfc, 0x59, 0x58, 0x07, 0x75, 0x1c, 0x26, 0x83,
  0x06, 0x18, 0x00, 0x40, 0x26, 0x09, 0x16, 0x12, 0x00, 0xd1, 0xe2, 0x05, 0x00,
  0x10, 0x3d, 0x00, 0x40, 0x75, 0x03, 0xb8, 0x00, 0xc0, 0xe2, 0xd0, 0xeb, 0x05,
  0x26, 0x09, 0x16, 0x14, 0x00, 0x06, 0xfc, 0x33, 0xff, 0x8e, 0xc7, 0xb9, 0x00,
  0x02, 0xb8, 0x00, 0xf0, 0xf3, 0xab, 0x33, 0xff, 0xbe, 0x57, 0xf8, 0xb9, 0x20,
  0x00, 0xa5, 0x47, 0x47, 0xe2, 0xfb, 0xbe, 0x97, 0xf8, 0xb9, 0xe0, 0x00, 0x8b,
  0x1c, 0x26, 0x89, 0x1d, 0x83, 0xc7, 0x04, 0xe2, 0xf8, 0x07, 0xba, 0x28, 0xff,
  0xb8, 0xfd, 0x00, 0xef, 0xba, 0x32, 0xff, 0xb8, 0x0d, 0x00, 0xef, 0xba, 0x34,
  0xff, 0xb8, 0x0f, 0x00, 0xef, 0xba, 0x36, 0xff, 0xb8, 0x0e, 0x00, 0xef, 0xba,
  0x38, 0xff, 0xb8, 0x19, 0x00, 0xef, 0xba, 0x3a, 0xff, 0xb8, 0x18, 0x00, 0xef,
  0xba, 0x3c, 0xff, 0xb8, 0x0b, 0x00, 0xef, 0xba, 0x3e, 0xff, 0xb8, 0x1a, 0x00,
  0xef, 0x8d, 0x3e, 0x90, 0x00, 0x8d, 0x36, 0x99, 0xf8, 0xb9, 0x02, 0x00, 0xf3,
  0xa5, 0xb9, 0x02, 0x00, 0x8d, 0x36, 0x90, 0x00, 0x26, 0x8b, 0x14, 0xb3, 0x01,
  0x32, 0xc0, 0xee, 0xb0, 0x0c, 0xee, 0x8a, 0xc3, 0x8a, 0xc3, 0xee, 0x83, 0xc6,
  0x02, 0x26, 0x8b, 0x14, 0xfe, 0xc3, 0xe2, 0xeb, 0xb9, 0x02, 0x00, 0x8d, 0x36,
  0x90, 0x00, 0x26, 0x8b, 0x14, 0xb3, 0x01, 0xbf, 0x00, 0x80, 0xb0, 0x0c, 0xee,
  0xf6, 0xe8, 0xec, 0x3a, 0xc3, 0x74, 0x0e, 0x33, 0xc0, 0x26, 0x89, 0x04, 0x26,
  0x81, 0x0e, 0x14, 0x00, 0x00, 0x02, 0xd1, 0xc7, 0x83, 0xc6, 0x02, 0x26, 0x8b,
  0x14, 0xfe, 0xc3, 0xe2, 0xde, 0x26, 0x81, 0x0e, 0x12, 0x00, 0x00, 0x02, 0xba,
  0x0c, 0x02, 0x33, 0xc0, 0xee, 0xba, 0x00, 0x02, 0xb9, 0x08, 0x00, 0xb8, 0x01,
  0x00, 0xee, 0x90, 0x90, 0xfe, 0xc0, 0xee, 0x90, 0x90, 0x42, 0xfe, 0xc0, 0xe2,
  0xf3, 0xba, 0x0c, 0x02, 0x33, 0xc0, 0xee, 0xba, 0x00, 0x02, 0xb9, 0x08, 0x00,
  0xb3, 0x01, 0xec, 0x3a, 0xc3, 0x75, 0x0f, 0xfe, 0xc3, 0xec, 0x3a, 0xc3, 0x75,
  0x08, 0x42, 0xfe, 0xc3, 0xe2, 0xef, 0xeb, 0x08, 0x90, 0x26, 0x81, 0x0e, 0x14,
  0x00, 0x00, 0x04, 0x26, 0x81, 0x0e, 0x12, 0x00, 0x00, 0x04, 0xba, 0x0d, 0x02,
  0xee, 0xb8, 0x00, 0x40, 0xba, 0x56, 0xff, 0xef, 0xba, 0x5e, 0xff, 0xef, 0xba,
  0x66, 0xff, 0xef, 0xba, 0x84, 0x00, 0xec, 0xb0, 0x09, 0xee, 0x90, 0x90, 0xb0,
  0xc0, 0xee, 0xb9, 0x02, 0x00, 0x8d, 0x36, 0x90, 0x00, 0x26, 0x8b, 0x14, 0xb0,
  0x04, 0xee, 0x90, 0x90, 0xb0, 0x20, 0xee, 0x90, 0x90, 0xb0, 0x01, 0xee, 0x90,
  0x90, 0xb0, 0xf9, 0xee, 0x90, 0x90, 0xb0, 0x03, 0xee, 0x90, 0x90, 0xb0, 0xc0,
  0xee, 0x90, 0x90, 0xb0, 0x05, 0xee, 0x90, 0x90, 0xb0, 0x60, 0xee, 0x90, 0x90,
  0xb0, 0x06, 0xee, 0x90, 0x90, 0xb0, 0xff, 0xee, 0x90, 0x90, 0xb0, 0x07, 0xee,
  0x90, 0x90, 0xb0, 0x7e, 0xee, 0x90, 0x90, 0xb0, 0x09, 0xee, 0x90, 0x90, 0xb0,
  0x2e, 0xee, 0x90, 0x90, 0xb0, 0x0a, 0xee, 0x90, 0x90, 0xb0, 0x00, 0xee, 0x90,
  0x90, 0xb0, 0x0b, 0xee, 0x90, 0x90, 0xb0, 0x56, 0xee, 0x90, 0x90, 0xb0, 0x0c,
  0xee, 0x90, 0x90, 0xb0, 0xfe, 0xee, 0x90, 0x90, 0xb0, 0x0d, 0xee, 0x90, 0x90,
  0xb0, 0x05, 0xee, 0x90, 0x90, 0xb0, 0x0e, 0xee, 0x90, 0x90, 0xb0, 0x17, 0xee,
  0x90, 0x90, 0xb0, 0x0f, 0xee, 0x90, 0x90, 0xb0, 0x41, 0xee, 0x90, 0x90, 0xb0,
  0x07, 0xee, 0x90, 0x90, 0xb0, 0x5b, 0xee, 0x90, 0x90, 0xb0, 0x03, 0xee, 0x90,
  0x90, 0xb0, 0xc9, 0xee, 0x90, 0x90, 0xb0, 0x05, 0xee, 0x90, 0x90, 0xb0, 0x69,
  0xee, 0x90, 0x90, 0xb0, 0x80, 0xee, 0x90, 0x90, 0xb0, 0x10, 0xee, 0x90, 0x90,
  0x46, 0x46, 0xe2, 0x03, 0xeb, 0x04, 0x90, 0xe9, 0x49, 0xff, 0xba, 0x3a, 0xff,
  0xb8, 0x16, 0x00, 0xef, 0xba, 0x38, 0xff, 0xb8, 0x07, 0x00, 0xef, 0xb9, 0x0e,
  0x00, 0xbb, 0x50, 0x00, 0x33, 0xc0, 0x26, 0x88, 0x07, 0x43, 0x40, 0xe2, 0xf9,
  0xb9, 0x20, 0x00, 0xbb, 0x60, 0x00, 0x26, 0xc6, 0x07, 0xff, 0x43, 0xe2, 0xf9,
  0xba, 0x0c, 0x02, 0x33, 0xc0, 0xee, 0x90, 0x90, 0xba, 0x02, 0x02, 0xb0, 0x60,
  0xee, 0x90, 0x90, 0xb0, 0x0c, 0xee, 0x90, 0x90, 0xba, 0x03, 0x02, 0xb0, 0x0f,
  0xee, 0x90, 0x90, 0xb0, 0x00, 0xee, 0xba, 0x0b, 0x02, 0xb0, 0x05, 0xee, 0xba,
  0x00, 0x02, 0xb0, 0x50, 0xee, 0xb0, 0x0c, 0xee, 0xe9, 0xcc, 0xfa, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xea, 0x00, 0xfc, 0x00, 0xf0, 0x43, 0x58, 0x48, 0x41,
  0x5f, 0x31, 0x39, 0x39, 0x30, 0x32, 0x30
};
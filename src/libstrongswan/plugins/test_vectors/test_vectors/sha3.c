/*
 * Copyright (C) 2015 Andreas Steffen
 * HSR Hochschule fuer Technik Rapperswil
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the Licenseor (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be usefulbut
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#include <crypto/crypto_tester.h>

/**
 * SHA-3_224 vectors from "https://github.com/gvanas/KeccakCodePackage/"
 */
hasher_test_vector_t sha3_224_0 = {
	.alg = HASH_SHA3_224, .len = 0,
	.data	= "",
	.hash	= "\x6B\x4E\x03\x42\x36\x67\xDB\xB7\x3B\x6E\x15\x45\x4F\x0E\xB1\xAB"
			  "\xD4\x59\x7F\x9A\x1B\x07\x8E\x3F\x5B\x5A\x6B\xC7"
};

hasher_test_vector_t sha3_224_1 = {
	.alg = HASH_SHA3_224, .len = 1,
	.data	= "\xCC",
	.hash	= "\xDF\x70\xAD\xC4\x9B\x2E\x76\xEE\xE3\xA6\x93\x1B\x93\xFA\x41\x84"
			  "\x1C\x3A\xF2\xCD\xF5\xB3\x2A\x18\xB5\x47\x8C\x39"
};

hasher_test_vector_t sha3_224_2 = {
	.alg = HASH_SHA3_224, .len = 2,
	.data	= "\x41\xFB",
	.hash	= "\xBF\xF2\x95\x86\x1D\xAE\xDF\x33\xE7\x05\x19\xB1\xE2\xBC\xB4\xC2"
			  "\xE9\xFE\x33\x64\xD7\x89\xBC\x3B\x17\x30\x1C\x15"
};

hasher_test_vector_t sha3_224_143 = {
	.alg = HASH_SHA3_224, .len = 143,
	.data	= "\xEA\x40\xE8\x3C\xB1\x8B\x3A\x24\x2C\x1E\xCC\x6C\xCD\x0B\x78\x53"
			  "\xA4\x39\xDA\xB2\xC5\x69\xCF\xC6\xDC\x38\xA1\x9F\x5C\x90\xAC\xBF"
			  "\x76\xAE\xF9\xEA\x37\x42\xFF\x3B\x54\xEF\x7D\x36\xEB\x7C\xE4\xFF"
			  "\x1C\x9A\xB3\xBC\x11\x9C\xFF\x6B\xE9\x3C\x03\xE2\x08\x78\x33\x35"
			  "\xC0\xAB\x81\x37\xBE\x5B\x10\xCD\xC6\x6F\xF3\xF8\x9A\x1B\xDD\xC6"
			  "\xA1\xEE\xD7\x4F\x50\x4C\xBE\x72\x90\x69\x0B\xB2\x95\xA8\x72\xB9"
			  "\xE3\xFE\x2C\xEE\x9E\x6C\x67\xC4\x1D\xB8\xEF\xD7\xD8\x63\xCF\x10"
			  "\xF8\x40\xFE\x61\x8E\x79\x36\xDA\x3D\xCA\x5C\xA6\xDF\x93\x3F\x24"
			  "\xF6\x95\x4B\xA0\x80\x1A\x12\x94\xCD\x8D\x7E\x66\xDF\xAF\xEC",
	.hash	= "\xAB\x0F\xD3\x08\x59\x05\x74\xD6\xF6\x13\x02\x32\xD9\xFA\xFA\x9F"
			  "\xFC\xFE\xA7\x85\x79\xA6\xA8\xF6\x7C\x59\x04\x20"
};

hasher_test_vector_t sha3_224_144 = {
	.alg = HASH_SHA3_224, .len = 144,
	.data	= "\x15\x7D\x5B\x7E\x45\x07\xF6\x6D\x9A\x26\x74\x76\xD3\x38\x31\xE7"
			  "\xBB\x76\x8D\x4D\x04\xCC\x34\x38\xDA\x12\xF9\x01\x02\x63\xEA\x5F"
			  "\xCA\xFB\xDE\x25\x79\xDB\x2F\x6B\x58\xF9\x11\xD5\x93\xD5\xF7\x9F"
			  "\xB0\x5F\xE3\x59\x6E\x3F\xA8\x0F\xF2\xF7\x61\xD1\xB0\xE5\x70\x80"
			  "\x05\x5C\x11\x8C\x53\xE5\x3C\xDB\x63\x05\x52\x61\xD7\xC9\xB2\xB3"
			  "\x9B\xD9\x0A\xCC\x32\x52\x0C\xBB\xDB\xDA\x2C\x4F\xD8\x85\x6D\xBC"
			  "\xEE\x17\x31\x32\xA2\x67\x91\x98\xDA\xF8\x30\x07\xA9\xB5\xC5\x15"
			  "\x11\xAE\x49\x76\x6C\x79\x2A\x29\x52\x03\x88\x44\x4E\xBE\xFE\x28"
			  "\x25\x6F\xB3\x3D\x42\x60\x43\x9C\xBA\x73\xA9\x47\x9E\xE0\x0C\x63",
	.hash	= "\xD5\x13\x42\x00\xDC\x98\xF4\xCA\x48\x0C\xD2\x4D\x24\x49\x77\x37"
			  "\x25\x2B\x55\x97\x7A\xE5\xA8\x69\xBA\x27\x08\x9D"
};

hasher_test_vector_t sha3_224_255 = {
	.alg = HASH_SHA3_224, .len = 255,
	.data	= "\x3A\x3A\x81\x9C\x48\xEF\xDE\x2A\xD9\x14\xFB\xF0\x0E\x18\xAB\x6B"
			  "\xC4\xF1\x45\x13\xAB\x27\xD0\xC1\x78\xA1\x88\xB6\x14\x31\xE7\xF5"
			  "\x62\x3C\xB6\x6B\x23\x34\x67\x75\xD3\x86\xB5\x0E\x98\x2C\x49\x3A"
			  "\xDB\xBF\xC5\x4B\x9A\x3C\xD3\x83\x38\x23\x36\xA1\xA0\xB2\x15\x0A"
			  "\x15\x35\x8F\x33\x6D\x03\xAE\x18\xF6\x66\xC7\x57\x3D\x55\xC4\xFD"
			  "\x18\x1C\x29\xE6\xCC\xFD\xE6\x3E\xA3\x5F\x0A\xDF\x58\x85\xCF\xC0"
			  "\xA3\xD8\x4A\x2B\x2E\x4D\xD2\x44\x96\xDB\x78\x9E\x66\x31\x70\xCE"
			  "\xF7\x47\x98\xAA\x1B\xBC\xD4\x57\x4E\xA0\xBB\xA4\x04\x89\xD7\x64"
			  "\xB2\xF8\x3A\xAD\xC6\x6B\x14\x8B\x4A\x0C\xD9\x52\x46\xC1\x27\xD5"
			  "\x87\x1C\x4F\x11\x41\x86\x90\xA5\xDD\xF0\x12\x46\xA0\xC8\x0A\x43"
			  "\xC7\x00\x88\xB6\x18\x36\x39\xDC\xFD\xA4\x12\x5B\xD1\x13\xA8\xF4"
			  "\x9E\xE2\x3E\xD3\x06\xFA\xAC\x57\x6C\x3F\xB0\xC1\xE2\x56\x67\x1D"
			  "\x81\x7F\xC2\x53\x4A\x52\xF5\xB4\x39\xF7\x2E\x42\x4D\xE3\x76\xF4"
			  "\xC5\x65\xCC\xA8\x23\x07\xDD\x9E\xF7\x6D\xA5\xB7\xC4\xEB\x7E\x08"
			  "\x51\x72\xE3\x28\x80\x7C\x02\xD0\x11\xFF\xBF\x33\x78\x53\x78\xD7"
			  "\x9D\xC2\x66\xF6\xA5\xBE\x6B\xB0\xE4\xA9\x2E\xCE\xEB\xAE\xB1",
	.hash	= "\x94\x68\x9E\xA9\xF3\x47\xDD\xA8\xDD\x79\x8A\x85\x86\x05\x86\x87"
			  "\x43\xC6\xBD\x03\xA6\xA6\x5C\x60\x85\xD5\x2B\xED"
};

/**
 * SHA-3_256 vectors from "https://github.com/gvanas/KeccakCodePackage/"
 */
hasher_test_vector_t sha3_256_0 = {
	.alg = HASH_SHA3_256, .len = 0,
	.data	= "",
	.hash	= "\xA7\xFF\xC6\xF8\xBF\x1E\xD7\x66\x51\xC1\x47\x56\xA0\x61\xD6\x62"
			  "\xF5\x80\xFF\x4D\xE4\x3B\x49\xFA\x82\xD8\x0A\x4B\x80\xF8\x43\x4A"
};

hasher_test_vector_t sha3_256_1 = {
	.alg = HASH_SHA3_256, .len = 1,
	.data	= "\xCC",
	.hash	= "\x67\x70\x35\x39\x1C\xD3\x70\x12\x93\xD3\x85\xF0\x37\xBA\x32\x79"
			  "\x62\x52\xBB\x7C\xE1\x80\xB0\x0B\x58\x2D\xD9\xB2\x0A\xAA\xD7\xF0"
};

hasher_test_vector_t sha3_256_2 = {
	.alg = HASH_SHA3_256, .len = 2,
	.data	= "\x41\xFB",
	.hash	= "\x39\xF3\x1B\x6E\x65\x3D\xFC\xD9\xCA\xED\x26\x02\xFD\x87\xF6\x1B"
			  "\x62\x54\xF5\x81\x31\x2F\xB6\xEE\xEC\x4D\x71\x48\xFA\x2E\x72\xAA"
};

hasher_test_vector_t sha3_256_135 = {
	.alg = HASH_SHA3_256, .len = 135,
	.data	= "\xB7\x71\xD5\xCE\xF5\xD1\xA4\x1A\x93\xD1\x56\x43\xD7\x18\x1D\x2A"
			  "\x2E\xF0\xA8\xE8\x4D\x91\x81\x2F\x20\xED\x21\xF1\x47\xBE\xF7\x32"
			  "\xBF\x3A\x60\xEF\x40\x67\xC3\x73\x4B\x85\xBC\x8C\xD4\x71\x78\x0F"
			  "\x10\xDC\x9E\x82\x91\xB5\x83\x39\xA6\x77\xB9\x60\x21\x8F\x71\xE7"
			  "\x93\xF2\x79\x7A\xEA\x34\x94\x06\x51\x28\x29\x06\x5D\x37\xBB\x55"
			  "\xEA\x79\x6F\xA4\xF5\x6F\xD8\x89\x6B\x49\xB2\xCD\x19\xB4\x32\x15"
			  "\xAD\x96\x7C\x71\x2B\x24\xE5\x03\x2D\x06\x52\x32\xE0\x2C\x12\x74"
			  "\x09\xD2\xED\x41\x46\xB9\xD7\x5D\x76\x3D\x52\xDB\x98\xD9\x49\xD3"
			  "\xB0\xFE\xD6\xA8\x05\x2F\xBB",
	.hash	= "\xA1\x9E\xEE\x92\xBB\x20\x97\xB6\x4E\x82\x3D\x59\x77\x98\xAA\x18"
			  "\xBE\x9B\x7C\x73\x6B\x80\x59\xAB\xFD\x67\x79\xAC\x35\xAC\x81\xB5"
};

hasher_test_vector_t sha3_256_136 = {
	.alg = HASH_SHA3_256, .len = 136,
	.data	= "\xB3\x2D\x95\xB0\xB9\xAA\xD2\xA8\x81\x6D\xE6\xD0\x6D\x1F\x86\x00"
			  "\x85\x05\xBD\x8C\x14\x12\x4F\x6E\x9A\x16\x3B\x5A\x2A\xDE\x55\xF8"
			  "\x35\xD0\xEC\x38\x80\xEF\x50\x70\x0D\x3B\x25\xE4\x2C\xC0\xAF\x05"
			  "\x0C\xCD\x1B\xE5\xE5\x55\xB2\x30\x87\xE0\x4D\x7B\xF9\x81\x36\x22"
			  "\x78\x0C\x73\x13\xA1\x95\x4F\x87\x40\xB6\xEE\x2D\x3F\x71\xF7\x68"
			  "\xDD\x41\x7F\x52\x04\x82\xBD\x3A\x08\xD4\xF2\x22\xB4\xEE\x9D\xBD"
			  "\x01\x54\x47\xB3\x35\x07\xDD\x50\xF3\xAB\x42\x47\xC5\xDE\x9A\x8A"
			  "\xBD\x62\xA8\xDE\xCE\xA0\x1E\x3B\x87\xC8\xB9\x27\xF5\xB0\x8B\xEB"
			  "\x37\x67\x4C\x6F\x8E\x38\x0C\x04",
	.hash	= "\xDF\x67\x3F\x41\x05\x37\x9F\xF6\xB7\x55\xEE\xAB\x20\xCE\xB0\xDC"
			  "\x77\xB5\x28\x63\x64\xFE\x16\xC5\x9C\xC8\xA9\x07\xAF\xF0\x77\x32"
};

hasher_test_vector_t sha3_256_255 = {
	.alg = HASH_SHA3_256, .len = 255,
	.data	= "\x3A\x3A\x81\x9C\x48\xEF\xDE\x2A\xD9\x14\xFB\xF0\x0E\x18\xAB\x6B"
			  "\xC4\xF1\x45\x13\xAB\x27\xD0\xC1\x78\xA1\x88\xB6\x14\x31\xE7\xF5"
			  "\x62\x3C\xB6\x6B\x23\x34\x67\x75\xD3\x86\xB5\x0E\x98\x2C\x49\x3A"
			  "\xDB\xBF\xC5\x4B\x9A\x3C\xD3\x83\x38\x23\x36\xA1\xA0\xB2\x15\x0A"
			  "\x15\x35\x8F\x33\x6D\x03\xAE\x18\xF6\x66\xC7\x57\x3D\x55\xC4\xFD"
			  "\x18\x1C\x29\xE6\xCC\xFD\xE6\x3E\xA3\x5F\x0A\xDF\x58\x85\xCF\xC0"
			  "\xA3\xD8\x4A\x2B\x2E\x4D\xD2\x44\x96\xDB\x78\x9E\x66\x31\x70\xCE"
			  "\xF7\x47\x98\xAA\x1B\xBC\xD4\x57\x4E\xA0\xBB\xA4\x04\x89\xD7\x64"
			  "\xB2\xF8\x3A\xAD\xC6\x6B\x14\x8B\x4A\x0C\xD9\x52\x46\xC1\x27\xD5"
			  "\x87\x1C\x4F\x11\x41\x86\x90\xA5\xDD\xF0\x12\x46\xA0\xC8\x0A\x43"
			  "\xC7\x00\x88\xB6\x18\x36\x39\xDC\xFD\xA4\x12\x5B\xD1\x13\xA8\xF4"
			  "\x9E\xE2\x3E\xD3\x06\xFA\xAC\x57\x6C\x3F\xB0\xC1\xE2\x56\x67\x1D"
			  "\x81\x7F\xC2\x53\x4A\x52\xF5\xB4\x39\xF7\x2E\x42\x4D\xE3\x76\xF4"
			  "\xC5\x65\xCC\xA8\x23\x07\xDD\x9E\xF7\x6D\xA5\xB7\xC4\xEB\x7E\x08"
			  "\x51\x72\xE3\x28\x80\x7C\x02\xD0\x11\xFF\xBF\x33\x78\x53\x78\xD7"
			  "\x9D\xC2\x66\xF6\xA5\xBE\x6B\xB0\xE4\xA9\x2E\xCE\xEB\xAE\xB1",
	.hash	= "\xC1\x1F\x35\x22\xA8\xFB\x7B\x35\x32\xD8\x0B\x6D\x40\x02\x3A\x92"
			  "\xB4\x89\xAD\xDA\xD9\x3B\xF5\xD6\x4B\x23\xF3\x5E\x96\x63\x52\x1C"
};

/**
 * SHA-3_384 vectors from "https://github.com/gvanas/KeccakCodePackage/"
 */
hasher_test_vector_t sha3_384_0 = {
	.alg = HASH_SHA3_384, .len = 0,
	.data	= "",
	.hash	= "\x0C\x63\xA7\x5B\x84\x5E\x4F\x7D\x01\x10\x7D\x85\x2E\x4C\x24\x85"
			  "\xC5\x1A\x50\xAA\xAA\x94\xFC\x61\x99\x5E\x71\xBB\xEE\x98\x3A\x2A"
			  "\xC3\x71\x38\x31\x26\x4A\xDB\x47\xFB\x6B\xD1\xE0\x58\xD5\xF0\x04"
};

hasher_test_vector_t sha3_384_1 = {
	.alg = HASH_SHA3_384, .len = 1,
	.data	= "\xCC",
	.hash	= "\x5E\xE7\xF3\x74\x97\x3C\xD4\xBB\x3D\xC4\x1E\x30\x81\x34\x67\x98"
			  "\x49\x7F\xF6\xE3\x6C\xB9\x35\x22\x81\xDF\xE0\x7D\x07\xFC\x53\x0C"
			  "\xA9\xAD\x8E\xF7\xAA\xD5\x6E\xF5\xD4\x1B\xE8\x3D\x5E\x54\x38\x07"
};

hasher_test_vector_t sha3_384_2 = {
	.alg = HASH_SHA3_384, .len = 2,
	.data	= "\x41\xFB",
	.hash	= "\x1D\xD8\x16\x09\xDC\xC2\x90\xEF\xFD\x7A\xC0\xA9\x5D\x4A\x20\x82"
			  "\x15\x80\xE5\x6B\xD5\x0D\xBD\x84\x39\x20\x65\x0B\xE7\xA8\x0A\x17"
			  "\x19\x57\x7D\xA3\x37\xCF\xDF\x86\xE5\x1C\x76\x4C\xAA\x2E\x10\xBD"
};

hasher_test_vector_t sha3_384_103 = {
	.alg = HASH_SHA3_384, .len = 103,
	.data	= "\xF1\x3C\x97\x2C\x52\xCB\x3C\xC4\xA4\xDF\x28\xC9\x7F\x2D\xF1\x1C"
			  "\xE0\x89\xB8\x15\x46\x6B\xE8\x88\x63\x24\x3E\xB3\x18\xC2\xAD\xB1"
			  "\xA4\x17\xCB\x10\x41\x30\x85\x98\x54\x17\x20\x19\x7B\x9B\x1C\xB5"
			  "\xBA\x23\x18\xBD\x55\x74\xD1\xDF\x21\x74\xAF\x14\x88\x41\x49\xBA"
			  "\x9B\x2F\x44\x6D\x60\x9D\xF2\x40\xCE\x33\x55\x99\x95\x7B\x8E\xC8"
			  "\x08\x76\xD9\xA0\x85\xAE\x08\x49\x07\xBC\x59\x61\xB2\x0B\xF5\xF6"
			  "\xCA\x58\xD5\xDA\xB3\x8A\xDB",
	.hash	= "\x0A\x83\x4E\x11\x1B\x4E\x84\x0E\x78\x7C\x19\x74\x84\x65\xA4\x7D"
			  "\x88\xB3\xF0\xF3\xDA\xAF\x15\xDB\x25\x53\x6B\xDC\x60\x78\xFA\x9C"
			  "\x05\xE6\xC9\x53\x83\x02\x74\x22\x39\x68\x84\x7D\xA8\xBF\xD2\x0D"
};

hasher_test_vector_t sha3_384_104 = {
	.alg = HASH_SHA3_384, .len = 104,
	.data	= "\xE3\x57\x80\xEB\x97\x99\xAD\x4C\x77\x53\x5D\x4D\xDB\x68\x3C\xF3"
			  "\x3E\xF3\x67\x71\x53\x27\xCF\x4C\x4A\x58\xED\x9C\xBD\xCD\xD4\x86"
			  "\xF6\x69\xF8\x01\x89\xD5\x49\xA9\x36\x4F\xA8\x2A\x51\xA5\x26\x54"
			  "\xEC\x72\x1B\xB3\xAA\xB9\x5D\xCE\xB4\xA8\x6A\x6A\xFA\x93\x82\x6D"
			  "\xB9\x23\x51\x7E\x92\x8F\x33\xE3\xFB\xA8\x50\xD4\x56\x60\xEF\x83"
			  "\xB9\x87\x6A\xCC\xAF\xA2\xA9\x98\x7A\x25\x4B\x13\x7C\x6E\x14\x0A"
			  "\x21\x69\x1E\x10\x69\x41\x38\x48",
	.hash	= "\xD1\xC0\xFA\x85\xC8\xD1\x83\xBE\xFF\x99\xAD\x9D\x75\x2B\x26\x3E"
			  "\x28\x6B\x47\x7F\x79\xF0\x71\x0B\x01\x03\x17\x01\x73\x97\x81\x33"
			  "\x44\xB9\x9D\xAF\x3B\xB7\xB1\xBC\x5E\x8D\x72\x2B\xAC\x85\x94\x3A"
};

hasher_test_vector_t sha3_384_255 = {
	.alg = HASH_SHA3_384, .len = 255,
	.data	= "\x3A\x3A\x81\x9C\x48\xEF\xDE\x2A\xD9\x14\xFB\xF0\x0E\x18\xAB\x6B"
			  "\xC4\xF1\x45\x13\xAB\x27\xD0\xC1\x78\xA1\x88\xB6\x14\x31\xE7\xF5"
			  "\x62\x3C\xB6\x6B\x23\x34\x67\x75\xD3\x86\xB5\x0E\x98\x2C\x49\x3A"
			  "\xDB\xBF\xC5\x4B\x9A\x3C\xD3\x83\x38\x23\x36\xA1\xA0\xB2\x15\x0A"
			  "\x15\x35\x8F\x33\x6D\x03\xAE\x18\xF6\x66\xC7\x57\x3D\x55\xC4\xFD"
			  "\x18\x1C\x29\xE6\xCC\xFD\xE6\x3E\xA3\x5F\x0A\xDF\x58\x85\xCF\xC0"
			  "\xA3\xD8\x4A\x2B\x2E\x4D\xD2\x44\x96\xDB\x78\x9E\x66\x31\x70\xCE"
			  "\xF7\x47\x98\xAA\x1B\xBC\xD4\x57\x4E\xA0\xBB\xA4\x04\x89\xD7\x64"
			  "\xB2\xF8\x3A\xAD\xC6\x6B\x14\x8B\x4A\x0C\xD9\x52\x46\xC1\x27\xD5"
			  "\x87\x1C\x4F\x11\x41\x86\x90\xA5\xDD\xF0\x12\x46\xA0\xC8\x0A\x43"
			  "\xC7\x00\x88\xB6\x18\x36\x39\xDC\xFD\xA4\x12\x5B\xD1\x13\xA8\xF4"
			  "\x9E\xE2\x3E\xD3\x06\xFA\xAC\x57\x6C\x3F\xB0\xC1\xE2\x56\x67\x1D"
			  "\x81\x7F\xC2\x53\x4A\x52\xF5\xB4\x39\xF7\x2E\x42\x4D\xE3\x76\xF4"
			  "\xC5\x65\xCC\xA8\x23\x07\xDD\x9E\xF7\x6D\xA5\xB7\xC4\xEB\x7E\x08"
			  "\x51\x72\xE3\x28\x80\x7C\x02\xD0\x11\xFF\xBF\x33\x78\x53\x78\xD7"
			  "\x9D\xC2\x66\xF6\xA5\xBE\x6B\xB0\xE4\xA9\x2E\xCE\xEB\xAE\xB1",
	.hash	= "\x12\x8D\xC6\x11\x76\x2B\xE9\xB1\x35\xB3\x73\x94\x84\xCF\xAA\xDC"
			  "\xA7\x48\x1D\x68\x51\x4F\x3D\xFD\x6F\x5D\x78\xBB\x18\x63\xAE\x68"
			  "\x13\x08\x35\xCD\xC7\x06\x1A\x7E\xD9\x64\xB3\x2F\x1D\xB7\x5E\xE1"
};

/**
 * SHA-3_512 vectors from "https://github.com/gvanas/KeccakCodePackage/"
 */
hasher_test_vector_t sha3_512_0 = {
	.alg = HASH_SHA3_512, .len = 0,
	.data	= "",
	.hash	= "\xA6\x9F\x73\xCC\xA2\x3A\x9A\xC5\xC8\xB5\x67\xDC\x18\x5A\x75\x6E"
			  "\x97\xC9\x82\x16\x4F\xE2\x58\x59\xE0\xD1\xDC\xC1\x47\x5C\x80\xA6"
			  "\x15\xB2\x12\x3A\xF1\xF5\xF9\x4C\x11\xE3\xE9\x40\x2C\x3A\xC5\x58"
			  "\xF5\x00\x19\x9D\x95\xB6\xD3\xE3\x01\x75\x85\x86\x28\x1D\xCD\x26"
};

hasher_test_vector_t sha3_512_1 = {
	.alg = HASH_SHA3_512, .len = 1,
	.data	= "\xCC",
	.hash	= "\x39\x39\xFC\xC8\xB5\x7B\x63\x61\x25\x42\xDA\x31\xA8\x34\xE5\xDC"
			  "\xC3\x6E\x2E\xE0\xF6\x52\xAC\x72\xE0\x26\x24\xFA\x2E\x5A\xDE\xEC"
			  "\xC7\xDD\x6B\xB3\x58\x02\x24\xB4\xD6\x13\x87\x06\xFC\x6E\x80\x59"
			  "\x7B\x52\x80\x51\x23\x0B\x00\x62\x1C\xC2\xB2\x29\x99\xEA\xA2\x05"
};

hasher_test_vector_t sha3_512_2 = {
	.alg = HASH_SHA3_512, .len = 2,
	.data	= "\x41\xFB",
	.hash	= "\xAA\x09\x28\x65\xA4\x06\x94\xD9\x17\x54\xDB\xC7\x67\xB5\x20\x2C"
			  "\x54\x6E\x22\x68\x77\x14\x7A\x95\xCB\x8B\x4C\x8F\x87\x09\xFE\x8C"
			  "\xD6\x90\x52\x56\xB0\x89\xDA\x37\x89\x6E\xA5\xCA\x19\xD2\xCD\x9A"
			  "\xB9\x4C\x71\x92\xFC\x39\xF7\xCD\x4D\x59\x89\x75\xA3\x01\x3C\x69"
};

hasher_test_vector_t sha3_512_71 = {
	.alg = HASH_SHA3_512, .len = 71,
	.data	= "\x13\xBD\x28\x11\xF6\xED\x2B\x6F\x04\xFF\x38\x95\xAC\xEE\xD7\xBE"
			  "\xF8\xDC\xD4\x5E\xB1\x21\x79\x1B\xC1\x94\xA0\xF8\x06\x20\x6B\xFF"
			  "\xC3\xB9\x28\x1C\x2B\x30\x8B\x1A\x72\x9C\xE0\x08\x11\x9D\xD3\x06"
			  "\x6E\x93\x78\xAC\xDC\xC5\x0A\x98\xA8\x2E\x20\x73\x88\x00\xB6\xCD"
			  "\xDB\xE5\xFE\x96\x94\xAD\x6D",
	.hash	= "\xDE\xF4\xAB\x6C\xDA\x88\x39\x72\x9A\x03\xE0\x00\x84\x66\x04\xB1"
			  "\x7F\x03\xC5\xD5\xD7\xEC\x23\xC4\x83\x67\x0A\x13\xE1\x15\x73\xC1"
			  "\xE9\x34\x7A\x63\xEC\x69\xA5\xAB\xB2\x13\x05\xF9\x38\x2E\xCD\xAA"
			  "\xAB\xC6\x85\x0F\x92\x84\x0E\x86\xF8\x8F\x4D\xAB\xFC\xD9\x3C\xC0"
};

hasher_test_vector_t sha3_512_72 = {
	.alg = HASH_SHA3_512, .len = 72,
	.data	= "\x1E\xED\x9C\xBA\x17\x9A\x00\x9E\xC2\xEC\x55\x08\x77\x3D\xD3\x05"
			  "\x47\x7C\xA1\x17\xE6\xD5\x69\xE6\x6B\x5F\x64\xC6\xBC\x64\x80\x1C"
			  "\xE2\x5A\x84\x24\xCE\x4A\x26\xD5\x75\xB8\xA6\xFB\x10\xEA\xD3\xFD"
			  "\x19\x92\xED\xDD\xEE\xC2\xEB\xE7\x15\x0D\xC9\x8F\x63\xAD\xC3\x23"
			  "\x7E\xF5\x7B\x91\x39\x7A\xA8\xA7",
	.hash	= "\xA3\xE1\x68\xB0\xD6\xC1\x43\xEE\x9E\x17\xEA\xE9\x29\x30\xB9\x7E"
			  "\x66\x00\x35\x6B\x73\xAE\xBB\x5D\x68\x00\x5D\xD1\xD0\x74\x94\x45"
			  "\x1A\x37\x05\x2F\x7B\x39\xFF\x03\x0C\x1A\xE1\xD7\xEF\xC4\xE0\xC3"
			  "\x66\x7E\xB7\xA7\x6C\x62\x7E\xC1\x43\x54\xC4\xF6\xA7\x96\xE2\xC6"
};

hasher_test_vector_t sha3_512_255 = {
	.alg = HASH_SHA3_512, .len = 255,
	.data	= "\x3A\x3A\x81\x9C\x48\xEF\xDE\x2A\xD9\x14\xFB\xF0\x0E\x18\xAB\x6B"
			  "\xC4\xF1\x45\x13\xAB\x27\xD0\xC1\x78\xA1\x88\xB6\x14\x31\xE7\xF5"
			  "\x62\x3C\xB6\x6B\x23\x34\x67\x75\xD3\x86\xB5\x0E\x98\x2C\x49\x3A"
			  "\xDB\xBF\xC5\x4B\x9A\x3C\xD3\x83\x38\x23\x36\xA1\xA0\xB2\x15\x0A"
			  "\x15\x35\x8F\x33\x6D\x03\xAE\x18\xF6\x66\xC7\x57\x3D\x55\xC4\xFD"
			  "\x18\x1C\x29\xE6\xCC\xFD\xE6\x3E\xA3\x5F\x0A\xDF\x58\x85\xCF\xC0"
			  "\xA3\xD8\x4A\x2B\x2E\x4D\xD2\x44\x96\xDB\x78\x9E\x66\x31\x70\xCE"
			  "\xF7\x47\x98\xAA\x1B\xBC\xD4\x57\x4E\xA0\xBB\xA4\x04\x89\xD7\x64"
			  "\xB2\xF8\x3A\xAD\xC6\x6B\x14\x8B\x4A\x0C\xD9\x52\x46\xC1\x27\xD5"
			  "\x87\x1C\x4F\x11\x41\x86\x90\xA5\xDD\xF0\x12\x46\xA0\xC8\x0A\x43"
			  "\xC7\x00\x88\xB6\x18\x36\x39\xDC\xFD\xA4\x12\x5B\xD1\x13\xA8\xF4"
			  "\x9E\xE2\x3E\xD3\x06\xFA\xAC\x57\x6C\x3F\xB0\xC1\xE2\x56\x67\x1D"
			  "\x81\x7F\xC2\x53\x4A\x52\xF5\xB4\x39\xF7\x2E\x42\x4D\xE3\x76\xF4"
			  "\xC5\x65\xCC\xA8\x23\x07\xDD\x9E\xF7\x6D\xA5\xB7\xC4\xEB\x7E\x08"
			  "\x51\x72\xE3\x28\x80\x7C\x02\xD0\x11\xFF\xBF\x33\x78\x53\x78\xD7"
			  "\x9D\xC2\x66\xF6\xA5\xBE\x6B\xB0\xE4\xA9\x2E\xCE\xEB\xAE\xB1",
	.hash	= "\x6E\x8B\x8B\xD1\x95\xBD\xD5\x60\x68\x9A\xF2\x34\x8B\xDC\x74\xAB"
			  "\x7C\xD0\x5E\xD8\xB9\xA5\x77\x11\xE9\xBE\x71\xE9\x72\x6F\xDA\x45"
			  "\x91\xFE\xE1\x22\x05\xED\xAC\xAF\x82\xFF\xBB\xAF\x16\xDF\xF9\xE7"
			  "\x02\xA7\x08\x86\x20\x80\x16\x6C\x2F\xF6\xBA\x37\x9B\xC7\xFF\xC2"
};

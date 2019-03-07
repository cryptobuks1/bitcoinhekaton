// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {
{     100, "f3c4ca0fdfff020b44be08ea2b1f05a597a3c269f0ba803896548de2201cfc7d"},
{     200, "f3bd3e9d33cae56c01ef98f55ce8c51ddaeb39af613210cb1f7f6f89a9f9c971"},
{     300, "e5bc696ccb359af9979b810993ad742bfec33300c208c5efe95e9b8fdd64b260"},
{     400, "c2bc1099f6d97ced278b72986d0f1ee4dae58dfd5ad6f4596e67ff9947eb5502"},
{     500, "ef672f903087dd388ae9b69b1a297a8ea35053c5322844aeb472671ba5778fe6"},
{     600, "1a788b2d478dbcc9b172aed6dfabef565512add52be2f2835ff7e8acc0f17747"},
{     700, "4ac1d577af1bcb10711a558fe33df3f9c21e599ce9095617ded6d4d986721573"},
{     800, "06a91dc0807418e952d7d3482c3667419801974227b2197f4cfb47d8de820d80"},
{     900, "708d9ece62b7b169de786d2d42a9c4baa16237ec3dd4d8a20530a6911107a4fa"},
{    1000, "bc71f03815bb0d61d011488a90fdd462866f55552b84180eb35a3234f260b6b4"},
{    1100, "94d91b270ea8910f536e186548eddae39c14d78e19bea511ce7bbfdcdf71c16f"},
{    1200, "f326598933baa854b004f631a2644b82cc773e5145dce401f34a0954e0c30a62"},
{    1300, "56923f3e7a388b5581cc460ce700ae05b0c8521f97bea27c0aac89ad1eb27342"},
{    1400, "8be85e56dd3b7cddbe9bfba7dbed8ac837b0eb022701054fba051a0909970cbe"},
{    1500, "6305a0fc1bd27b6c47f821e9823e2eefaf0843e834f81f6c64084195a84cebac"},
{    1600, "98bdf23d7b3e99defeb4ae76e8dfe5a9b741ef10b96a269a66069f97ceeecd9f"}
};
}

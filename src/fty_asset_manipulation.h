/*  =========================================================================
    fty_asset_manipulation - Helper functions to perform asset manipulation

    Copyright (C) 2016 - 2020 Eaton

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
    =========================================================================
*/

#pragma once

#include "fty_asset_dto.h"

typedef struct _fty_proto_t fty_proto_t;

// insert and update asset into db
fty::Asset createAsset(const fty::Asset& asset, bool tryActivate, bool test = false);
fty::Asset updateAsset(const fty::Asset& asset, bool test = false);

// fty::Asset/fty-proto conversion
fty_proto_t * assetToFtyProto(const fty::Asset& asset, const std::string& operation, bool test = false);
fty::Asset ftyProtoToAsset(fty_proto_t * proto, bool extAttributeReadOnly = false, bool test = false);

// for test purposes
extern std::map<std::string, std::string> test_map_asset_state;
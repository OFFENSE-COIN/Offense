// Copyright (c) 2020 The PIVX developers
// Copyright (c) 2022 The Offense Coin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or https://www.opensource.org/licenses/mit-license.php.

#ifndef OFFENSE_COIN_SAPLING_TEST_FIXTURE_H
#define OFFENSE_COIN_SAPLING_TEST_FIXTURE_H

#include "test/test_offense_coin.h"

/**
 * Testing setup that configures a complete environment for Sapling testing.
 */
struct SaplingTestingSetup : public TestingSetup
{
    SaplingTestingSetup(const std::string& chainName = CBaseChainParams::MAIN);
    ~SaplingTestingSetup();
};

/**
 * Regtest setup with sapling always active
 */
struct SaplingRegTestingSetup : public SaplingTestingSetup
{
    SaplingRegTestingSetup();
};


#endif //OFFENSE_COIN_SAPLING_TEST_FIXTURE_H

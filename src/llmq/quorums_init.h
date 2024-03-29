// Copyright (c) 2018 The zeroone Core developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef zeroone_QUORUMS_INIT_H
#define zeroone_QUORUMS_INIT_H

class CEvoDB;

namespace llmq
{

void InitLLMQSystem(CEvoDB& evoDb);
void DestroyLLMQSystem();

}

#endif //zeroone_QUORUMS_INIT_H

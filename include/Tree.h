#ifndef Tree_h
#define Tree_h

#include <TTree.h>

/****************************************************/

void InitializeTree() {
    TTree::SetMaxTreeSize(100*Long64_t(2000000000));
    teb = new TTree("teb", "Tree - event build data");
}

void InitializeTreeMode1() {
    teb->Branch("g1", "g1OUT", &(gret->g1out));
}

void InitializeTreeMode2() {
    teb->Branch("g2", "g2OUT", &(gret->g2out));
}

void InitializeTreeMode3() {
    teb->Branch("g3", "g3OUT", &(gret->g3out));
}

void InitializeTreeSimulation() {
    teb->Branch("gSim", "g4SimOUT", &(gret->gSimOut));
}

void InitializeTreeBank88() {
    teb->Branch("b88", "Bank88", &(gret->b88));
}

void InitializeTreeHistory() {
    teb->Branch("g3H", "g3HistoryEvent", &(gret->g3H));
}

#endif // Tree_h

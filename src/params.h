// Copyright 2015, 2016 by Jon Dart. All Rights Reserved.
//
#ifndef _PARAMS_H
#define _PARAMS_H

#include "types.h"

#ifdef TUNE
// scoring parameters that are not const, so can be
// modified during tuning
#define PARAM_MOD score_t
#else
// parameters are const so can be optimized better
#define PARAM_MOD const score_t
#endif

#ifdef __INTEL_COMPILER
#pragma pack(push,1)
#endif

struct Params 
BEGIN_PACKED_STRUCT
    
    static const int KING_ATTACK_SCALE_SIZE = 150;
    static const int KING_ATTACK_FACTOR_RESOLUTION = 4;

    static PARAM_MOD RB_ADJUST[4];
    static PARAM_MOD RBN_ADJUST[4];
    static PARAM_MOD QR_ADJUST[4];
    static PARAM_MOD KN_VS_PAWN_ADJUST[3];
    static PARAM_MOD CASTLING[6];
    static PARAM_MOD KING_COVER[6][4];
    static PARAM_MOD KING_COVER_BASE;
    static PARAM_MOD KING_DISTANCE_BASIS;
    static PARAM_MOD KING_DISTANCE_MULT;
    static PARAM_MOD PIN_MULTIPLIER_MID;
    static PARAM_MOD PIN_MULTIPLIER_END;
    static PARAM_MOD ROOK_VS_PAWNS;
    static PARAM_MOD KRMINOR_VS_R;
    static PARAM_MOD KRMINOR_VS_R_NO_PAWNS;
    static PARAM_MOD KQMINOR_VS_Q;
    static PARAM_MOD KQMINOR_VS_Q_NO_PAWNS;
    static PARAM_MOD MINOR_FOR_PAWNS;
    static PARAM_MOD ENDGAME_PAWN_ADVANTAGE;
    static PARAM_MOD PAWN_ENDGAME1;
    static PARAM_MOD PAWN_ENDGAME2;
    static PARAM_MOD PAWN_ATTACK_FACTOR1;
    static PARAM_MOD PAWN_ATTACK_FACTOR2;
    static PARAM_MOD MINOR_ATTACK_FACTOR;
    static PARAM_MOD MINOR_ATTACK_BOOST;
    static PARAM_MOD ROOK_ATTACK_FACTOR;
    static PARAM_MOD ROOK_ATTACK_BOOST;
    static PARAM_MOD ROOK_ATTACK_BOOST2;
    static PARAM_MOD QUEEN_ATTACK_FACTOR;
    static PARAM_MOD QUEEN_ATTACK_BOOST;
    static PARAM_MOD QUEEN_ATTACK_BOOST2;
    static PARAM_MOD PAWN_THREAT_ON_PIECE_MID;
    static PARAM_MOD PAWN_THREAT_ON_PIECE_END;
    static PARAM_MOD PIECE_THREAT_MM_MID;
    static PARAM_MOD PIECE_THREAT_MR_MID;
    static PARAM_MOD PIECE_THREAT_MQ_MID;
    static PARAM_MOD PIECE_THREAT_MM_END;
    static PARAM_MOD PIECE_THREAT_MR_END;
    static PARAM_MOD PIECE_THREAT_MQ_END;
    static PARAM_MOD MINOR_PAWN_THREAT_END;
    static PARAM_MOD MINOR_PAWN_THREAT_MID;
    static PARAM_MOD PIECE_THREAT_RM_MID;
    static PARAM_MOD PIECE_THREAT_RR_MID;
    static PARAM_MOD PIECE_THREAT_RQ_MID;
    static PARAM_MOD PIECE_THREAT_RM_END;
    static PARAM_MOD PIECE_THREAT_RR_END;
    static PARAM_MOD PIECE_THREAT_RQ_END;
    static PARAM_MOD ROOK_PAWN_THREAT_MID;
    static PARAM_MOD ROOK_PAWN_THREAT_END;
    static PARAM_MOD ENDGAME_KING_THREAT;
    static PARAM_MOD BISHOP_TRAPPED;
    static PARAM_MOD BISHOP_PAIR_MID;
    static PARAM_MOD BISHOP_PAIR_END;
    static PARAM_MOD BISHOP_PAWN_PLACEMENT_END;
    static PARAM_MOD BAD_BISHOP_MID;
    static PARAM_MOD BAD_BISHOP_END;
    static PARAM_MOD OUTPOST_NOT_DEFENDED;
    static PARAM_MOD CENTER_PAWN_BLOCK;
    static PARAM_MOD OUTSIDE_PASSER_MID;
    static PARAM_MOD OUTSIDE_PASSER_END;
    static PARAM_MOD WEAK_PAWN_MID;
    static PARAM_MOD WEAK_PAWN_END;
    static PARAM_MOD WEAK_ON_OPEN_FILE_MID;
    static PARAM_MOD WEAK_ON_OPEN_FILE_END;
    static PARAM_MOD SPACE;
    static PARAM_MOD PAWN_CENTER_SCORE_MID;
    static PARAM_MOD ROOK_ON_7TH_MID;
    static PARAM_MOD ROOK_ON_7TH_END;
    static PARAM_MOD TWO_ROOKS_ON_7TH_MID;
    static PARAM_MOD TWO_ROOKS_ON_7TH_END;
    static PARAM_MOD ROOK_ON_OPEN_FILE_MID;
    static PARAM_MOD ROOK_ON_OPEN_FILE_END;
    static PARAM_MOD ROOK_BEHIND_PP_MID;
    static PARAM_MOD ROOK_BEHIND_PP_END;
    static PARAM_MOD QUEEN_OUT;
    static PARAM_MOD PAWN_SIDE_BONUS;
    static PARAM_MOD KING_OWN_PAWN_DISTANCE;
    static PARAM_MOD KING_OPP_PAWN_DISTANCE;
    static PARAM_MOD SUPPORTED_PASSER6;
    static PARAM_MOD SUPPORTED_PASSER7;
    static PARAM_MOD SIDE_PROTECTED_PAWN;

    // The following tables are computed from tuning parameters.
    static PARAM_MOD KING_ATTACK_COUNT_BOOST[3];
    static PARAM_MOD KING_ATTACK_COVER_BOOST[5];
    static PARAM_MOD KING_OPP_PASSER_DISTANCE[6];
    static PARAM_MOD KING_POSITION_LOW_MATERIAL[3];
    static PARAM_MOD TRADE_DOWN[8];
    static PARAM_MOD KING_ATTACK_SCALE[KING_ATTACK_SCALE_SIZE];
    static PARAM_MOD PASSED_PAWN[2][8];
    static PARAM_MOD POTENTIAL_PASSER[2][8];
    static PARAM_MOD CONNECTED_PASSER[2][8];
    static PARAM_MOD ADJACENT_PASSER[2][8];
    static PARAM_MOD PP_OWN_PIECE_BLOCK[2][21];
    static PARAM_MOD PP_OPP_PIECE_BLOCK[2][21];
    static PARAM_MOD DOUBLED_PAWNS[2][8];
    static PARAM_MOD TRIPLED_PAWNS[2][8];
    static PARAM_MOD ISOLATED_PAWN[2][8];

    // Piece/square tables
    static PARAM_MOD KNIGHT_PST[2][64];
    static PARAM_MOD BISHOP_PST[2][64];
    static PARAM_MOD ROOK_PST[2][64];
    static PARAM_MOD QUEEN_PST[2][64];
    static PARAM_MOD KING_PST[2][64];

    // mobility tables
    static PARAM_MOD KNIGHT_MOBILITY[9];
    static PARAM_MOD BISHOP_MOBILITY[15];
    static PARAM_MOD ROOK_MOBILITY[2][15];
    static PARAM_MOD QUEEN_MOBILITY[2][29];
    static PARAM_MOD KING_MOBILITY_ENDGAME[5];

    // outpost scores
    static PARAM_MOD KNIGHT_OUTPOST[3][64];
    static PARAM_MOD BISHOP_OUTPOST[3][64];

    // not tuned presently (fixed)
    static const int MATERIAL_SCALE[32];
    static const int MIDGAME_THRESHOLD;
    static const int ENDGAME_THRESHOLD;

#ifdef TUNE
    static void write(ostream &, const string &comment);
#endif
END_PACKED_STRUCT

#ifdef __INTEL_COMPILER
#pragma pack(pop)
#endif

#endif

#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 858619482
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p, unsigned long long p_9, short p_15, long long p_17)
{
  short v_23;
  short v_21;
  unsigned long v_19;
  unsigned short v_13;
  signed char v_11;
  unsigned long v_7;
  unsigned long long v_5;
  short v;
  float result;
  v_23 = (short)p_17;
  v_21 = p;
  v_19 = (unsigned long)p_9;
  v_13 = (unsigned short)p_15;
  v_11 = (signed char)-69;
  v_7 = (unsigned long)p_9;
  v_5 = 18446744073128728177ULL;
  v = (short)p_17;
  result = (float)p_9;
  if (18446744073125492477ULL < (v_5 - (unsigned long long)(v_19 & (unsigned long)v_11)) - (unsigned long long)(
                                (int)((unsigned char)1.27607699965e+38) / 70)) {
    v_7 = (unsigned long)(((int)(~ p_15) + 102 * (int)p) >> ((176ULL & p_9) / (unsigned long long)(
                                                             (int)v_11 + 954) & 31ULL));
    v_5 = (unsigned long long)((int)p ^ (int)(~ (~ v_13)));
    v_7 = v_7;
  }
  else {
    v_11 = (signed char)((unsigned long long)(((int)p_15 * (int)p_15) % 11205) + (
                         p_9 / (unsigned long long)((int)v_21 + 339) + (unsigned long long)(
                         (long long)v_23 - p_17)));
    result = (float)(- ((p_17 / 104LL) / (long long)(~ v_19 + 168UL)));
    v_13 = (unsigned short)(29584LL + (16804LL + (long long)p));
  }
  while ((unsigned long long)(-113780751LL / (long long)(- ((int)v - (int)p) + 521)) >= - v_5) {
    v_5 = (unsigned long long)v_13 * - ((unsigned long long)v_7 - p_9);
    result = (float)((int)v_11 % 32);
    v = (short)((858105706ULL ^ ! p_9) + (unsigned long long)(((int)p & (int)p) % (
                                                              (int)v + 272)));
  }
  while_0_break: ;
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 239081476
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p, short p_13)
{
  int v_15;
  unsigned int v_10;
  unsigned char v_8;
  char v_6;
  unsigned long long v_4;
  short v;
  unsigned short result;
  v_15 = -2551;
  v_10 = 3795564324U;
  v_8 = (unsigned char)p;
  v = (short)-16230;
  v_6 = (char)(! (~ ((long long)v_15 / -7677LL)) / (long long)((int)v_8 + 279));
  v = (short)((((unsigned int)v_8 % (v_10 + 560U)) / ((p - (unsigned int)p_13) + 556U) - 15099U) % (unsigned int)(
              (int)v + 983));
  v_4 = 59ULL;
  result = (unsigned short)((4294921221U << ((unsigned long long)(! v) % (
                                             57964718ULL * v_4 + 541ULL) & 31ULL)) % (unsigned int)(
                            (int)v_6 + 202));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 140650146
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(double p, unsigned int p_15)
{
  short v_13;
  unsigned long long v_11;
  long v_9;
  unsigned char v_6;
  short v_4;
  unsigned int v;
  unsigned short result;
  v_13 = (short)11643;
  v_11 = (unsigned long long)p;
  v_4 = (short)p;
  result = (unsigned short)61250;
  v_9 = (long)((v_11 + (unsigned long long)(4294967282U % (566728827U * (unsigned int)v_4 + 97U))) - 
               - ((unsigned long long)v_13 % 528823179ULL) * (unsigned long long)(
               (unsigned int)p << (p_15 & 31U)));
  v_6 = (unsigned char)p;
  v = (unsigned int)(~ v_9);
  result = (unsigned short)((unsigned long)(97U % (v + 992U)) / (3UL * (unsigned long)(
                                                                 (long)v_4 % -665662184L) + 440UL) + (
                            (21733UL % (unsigned long)((int)v_6 + 931)) % (unsigned long)(
                            ((int)result + (int)((unsigned short)p)) + 863) | (unsigned long)(! v_4)));
  return result;
}



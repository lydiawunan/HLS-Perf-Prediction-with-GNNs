#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 312434072
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long p)
{
  signed char v_19;
  unsigned char v_17;
  unsigned long long v_15;
  long long v_13;
  unsigned long v_10;
  unsigned short v_8;
  unsigned short v_6;
  signed char v_4;
  unsigned char v;
  long long result;
  v_19 = (signed char)p;
  v_17 = (unsigned char)p;
  v_15 = 18446744073155417230ULL;
  v_13 = (long long)p;
  v_10 = p;
  v_8 = (unsigned short)p;
  v_6 = (unsigned short)p;
  v_4 = (signed char)109;
  v = (unsigned char)115;
  while ((unsigned long long)((long long)(~ (p + 62036743UL)) / (! v_13 % (long long)(
                                                                 (p | 1475UL) + 253UL) + 72LL)) > 
         (- v_15 * (unsigned long long)(- v_4)) % (((unsigned long long)(~ p) & (
                                                    463124249ULL - (unsigned long long)v_10)) + 440ULL)) {
    v = (long long)v_19 * -459311328LL;
    v_6 = (unsigned short)29457;
    v_15 = (unsigned long long)p;
    v_13 = (long long)((p * (unsigned long)v_17 & p) / 56588UL);
  }
  while_0_break: ;
  result = (long long)((unsigned long)((int)v + (int)v_4 % ((int)v_6 + 453)) % (
                       ((unsigned long)v_8 - v_10 * 255UL) + 905UL));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1059826954
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p, long p_7, unsigned long long p_9,
                  unsigned long p_15, char p_17)
{
  signed char v_25;
  int v_23;
  unsigned long v_21;
  signed char v_19;
  unsigned char v_13;
  float v_11;
  unsigned char v_5;
  unsigned long v;
  unsigned char result;
  v_23 = (int)p_15;
  v_21 = (unsigned long)p_9;
  v_19 = (signed char)p_9;
  v_13 = (unsigned char)113;
  v_11 = -5486966272.f;
  while ((unsigned long)v_13 < ! p_15) {
    v_25 = (unsigned long)v_23 + (v_21 - 21004UL);
    v_19 = v_25;
    v_23 = -597094151;
    v_13 = (unsigned char)(((long long)(! v_23) & 106795LL) / (long long)(
                           p_15 + 375UL));
  }
  while_0_break: ;
  if (((v_11 / 2.85376444073e+38f) / ((float)((unsigned long)v_13 ^ p_15) + 990.f)) * (float)p_9 >= (float)(
      7583ULL + ((unsigned long long)p_17 + 60677ULL) % (unsigned long long)(
                (int)p % ((int)v_19 + 747) + 841))) {
    v = (unsigned long)((unsigned long long)((unsigned long)((long)p + -322510633L) - 4294907438UL) ^ (
                        (unsigned long long)p % 667863608ULL & 18446744073709494830ULL));
    result = (unsigned char)(- v);
  }
  else {
    v_5 = (unsigned char)(! ((unsigned long long)-3858137856.f * (p_9 % 13963ULL)));
    result = (unsigned char)((unsigned long)((long)((int)v_5 + (int)v_5) % (
                                             p_7 + 578L)) % 5132UL);
  }
  return result;
}



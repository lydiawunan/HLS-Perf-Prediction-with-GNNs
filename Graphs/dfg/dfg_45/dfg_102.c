#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 236855061
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned char p[3])
{
  signed char v_9;
  signed char v_7;
  unsigned short v_4;
  long v;
  long result;
  v_9 = (signed char)30;
  v_7 = (signed char)p[0];
  result = (long)((350758167UL + (unsigned long)v_9) & 3703996482UL);
  v_4 = (unsigned short)33901;
  v = ((result - (long)((int)p[0] & (int)p[2])) % (long)((0 ^ (int)p[2] * (int)p[2]) + 33)) * (long)(
      (int)p[0] ^ (int)v_7);
  result = v / (long)((int)v_4 + 374);
  return result;
}



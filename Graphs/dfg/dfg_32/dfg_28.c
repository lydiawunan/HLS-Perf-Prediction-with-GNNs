#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 848426376
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p, unsigned short p_7, long long p_9,
                  long long p_15)
{
  long long v_13;
  long v_11;
  char v_4;
  unsigned int v;
  unsigned char result;
  v_11 = -8611785L;
  v_13 = (long long)(! 3499835931UL);
  v = (unsigned int)(! (! v_13) % (~ ((p_15 + 4294931713LL) + 106LL) + 695LL));
  v_4 = (char)v_11;
  result = (unsigned char)((! v / (unsigned int)((int)(! (~ v_4)) + 82)) * (unsigned int)(
                           ! ((int)p & (int)p) - ((int)p_7 >> (p_9 & 15LL))));
  return result;
}



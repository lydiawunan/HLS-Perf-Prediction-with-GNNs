#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 117289416
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p, float p_4, long long p_9, unsigned char p_11, short p_13)
{
  short v_17;
  unsigned long long v_15;
  int v_7;
  unsigned short v;
  short result;
  v_17 = p_13;
  v_15 = 51170ULL;
  v_7 = 919395279;
  v = (unsigned short)p_11;
  result = (short)(~ (995517077LL ^ p_9));
  while ((unsigned long long)((int)p >> ((int)((short)p_4) & 15)) == 
         (unsigned long long)((long long)(~ v) - (long long)v_7 / (p_9 + 773LL)) % (
         (unsigned long long)((int)p_11 - (int)p_13) % (v_15 % 18446744073709527906ULL + 70ULL) + 830ULL)) {
    result = (int)v_17 % 15825919;
    v_7 = (int)(~ ((long long)p_13 * -64558LL));
    v = (unsigned short)(-0);
    v_15 = 3ULL;
  }
  while_0_break: ;
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 383449528
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned char p, double p_7, short p_17)
{
  short v_15;
  short v_13;
  unsigned int v_11;
  long long v_9;
  long v_4;
  unsigned long long v;
  unsigned short result;
  v_15 = (short)21012;
  v_13 = (short)p;
  v_9 = 30869LL;
  result = (unsigned short)40244;
  v_11 = (unsigned int)((((int)(~ p) << 5) ^ (int)((float)((int)v_13 - (int)result) - -9130280960.f)) * (
                        (int)(~ (- v_13)) / ((39172 - (int)p_17) + 705)));
  v = (unsigned long long)(((-25118LL + (long long)(150 % ((int)p + 761))) - 
                            v_9 / (long long)((v_11 - (unsigned int)v_13) + 468U)) & (long long)v_15);
  v_4 = (long)p;
  result = (unsigned short)(v + (unsigned long long)(v_4 * (long)((int)p % (
                                                                  (int)((unsigned char)p_7) + 208) >> 14LL)));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 131446181
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p, long long p_7[4],
                       unsigned char p_9, unsigned long p_13, short p_15)
{
  unsigned short v_21;
  float v_19;
  int v_17;
  int v_11;
  int v_5;
  char v;
  unsigned long long result;
  v_21 = (unsigned short)p_7[3];
  v_19 = 1.44527278821e+38f;
  v_17 = (int)p_7[3];
  v_11 = -341998336;
  v_5 = 172358650;
  v = (char)p;
  result = p;
  while (v_11 < (int)((((float)v_17 - v_19) - 43408.f) - (float)(-45223LL & 
                                                                 (long long)p_13 % (
                                                                 p_7[0] + 738LL)))) {
    v_19 = (double)v_21 + -1.18559865155e+38;
    v_5 = (int)(- (! (! -21658LL)));
    v_17 = ((int)(! p_9) - - v_11) * - (~ v_11);
    v_17 = (int)((~ p_7[2] ^ (long long)(231647294 % (v_17 + 590))) % (long long)(
                 (int)p_9 + 823));
  }
  while_0_break: ;
  while ((unsigned long long)(~ v) == (p / (unsigned long long)(v_5 + 746)) * (unsigned long long)(
                                      p_7[0] * (long long)(133 + (int)p_9))) {
    v_5 = v_11 * 32;
    result = (unsigned long long)((int)p_15 - (int)p_15 * 19932) ^ ((unsigned long long)(
                                                                    -12598LL * p_7[0]) + ~ p);
    v_11 = (int)(~ ((unsigned long)((int)p_15 * (int)p_9) % ((4088424346UL - (unsigned long)p_9) + 886UL)));
    v = (char)p_13;
  }
  while_0_break_0: ;
  return result;
}



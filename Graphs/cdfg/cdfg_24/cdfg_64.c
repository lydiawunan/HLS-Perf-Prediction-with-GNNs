#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 451096548
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned char p[3][3], unsigned long long p_7, long p_9, char p_13)
{
  unsigned long v_19;
  unsigned long v_17;
  unsigned short v_15;
  short v_11;
  float v_4;
  char v;
  char result;
  v_19 = (unsigned long)p_7;
  v_17 = 386596319UL;
  v_15 = (unsigned short)2117;
  v_11 = (short)32093;
  v_4 = -2045851776.f;
  v = (char)p_9;
  result = (char)-60;
  while ((double)(! p_9) * (-2743141708.57 - (double)v_11) == (double)(
         ((int)v_11 * (int)result << ((int)(! p[2][2]) & 31)) % ((int)(
                                                                 (float)(
                                                                 (int)p_13 / (
                                                                 (int)v_11 + 875)) * v_4) + 376))) {
    v_11 = v_17 / (unsigned long)((int)v_15 * (int)((unsigned short)-632.269814631) + 847);
    v_15 = (unsigned short)v_19;
    v = (char)((unsigned long long)(52L | (long)(- p[1][1])) / (~ (35154ULL * p_7) + 558ULL));
    v_4 = (float)-212860406L;
  }
  while_0_break: ;
  result = (char)((unsigned long long)(((int)v + (int)((char)v_4)) & (
                                       (int)((unsigned char)v_4) + (int)p[0][0])) + ! (
                  p_7 * (unsigned long long)p[2][2]));
  return result;
}



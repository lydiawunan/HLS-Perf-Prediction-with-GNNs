#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 313096391
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p, double p_4, unsigned short p_27,
                unsigned long p_31[2][2][2])
{
  unsigned int v_29;
  long long v_25;
  short v_23;
  int v_21;
  long long v_19;
  long long v_17;
  int v_15;
  long v_13;
  int v_11;
  unsigned long v_9;
  unsigned char v_7;
  unsigned short v;
  signed char result;
  v_29 = (unsigned int)p;
  v_23 = p;
  v_21 = 99437407;
  v_19 = 560604453LL;
  v_17 = -18090LL;
  v_15 = -135512850;
  v_13 = (long)p_4;
  v_7 = (unsigned char)106;
  result = (signed char)30;
  if ((long long)(- ((p_31[0][0][1] / 834058774UL) / (unsigned long)(
                     v_29 + 977U))) <= (long long)((int)((short)p_4) & (int)v_23) % (
                                       - (v_17 % (long long)((int)p + 581)) + 145LL)) {
    v_11 = (int)v_17;
    v_17 = (long long)(- (p_4 / 541.) - (double)(((int)result ^ v_11) ^ -80));
    v_11 = (int)(((long long)(-7548 + v_15) - v_17) ^ v_19 * (long long)(
                                                      v_21 - (int)v_23));
  }
  else {
    v_25 = (long long)((unsigned long)(! (4294967252U / (v_29 + 300U))) - 
                       ! p_31[0][0][1] % 4294915460UL);
    v_7 = (unsigned char)(- (~ ((int)p_27 - 35)));
    v_11 = (int)(-347LL * ! (! v_25));
  }
  if ((double)(! ((unsigned int)(- p_4) % (4294948948U / (unsigned int)(
                                           v_11 + 1003) + 769U))) != - (
      -6828230429.32 * (double)v_13)) result = (signed char)((long)((int)(~ p) / (
                                                                    (int)((short)p_4) + 858)) * 30513272L);
  else {
    v_9 = 4294967167UL;
    v = (unsigned short)(! ((int)(- v_7) << (- v_9 & 7UL)));
    result = (signed char)v;
  }
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 516632071
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long p, signed char p_5, unsigned int p_7[1][3],
                  unsigned long p_11, unsigned int p_13)
{
  unsigned long long v_19;
  unsigned long v_17;
  unsigned long long v_15;
  int v_9;
  short v;
  unsigned char result;
  v_19 = (unsigned long long)p_11;
  v_17 = (unsigned long)p;
  v_9 = -976287545;
  v_15 = (unsigned long long)(((unsigned long)(! p_5) + (4294922320UL + (unsigned long)v_9)) / (unsigned long)(
                              v_9 + 719)) - (unsigned long long)(~ (-9678 + (int)((short)6496223232.f))) / (
                                            (~ v_19 + (unsigned long long)(
                                             p << 17ULL)) + 57ULL);
  v_9 = (int)(- ((unsigned long long)(~ p_13) * (v_15 / (unsigned long long)(
                                                 v_17 / (p_11 + 855UL) + 493UL))));
  v = (short)(24130ULL / (unsigned long long)((p_7[0][0] + (unsigned int)v_9) + 59U) + (unsigned long long)(- (
              (long long)p_11 % 444147252LL)));
  result = (unsigned char)(! (! (600183528LL / (long long)(p + 246L))) / (long long)(
                           ((unsigned int)(~ ((int)v * (int)p_5)) + 48205U) + 702U));
  return result;
}



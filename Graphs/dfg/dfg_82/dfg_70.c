#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 719126326
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned char p, unsigned char p_7,
                   unsigned long long p_9, short p_11[3],
                   long long p_15[1][2][4])
{
  unsigned long v_17;
  int v_13;
  char v_5;
  signed char v;
  unsigned short result;
  v_17 = (unsigned long)p_9;
  v_5 = (char)p_7;
  v_13 = (int)v_17;
  v = (signed char)((long long)(((int)(! p_11[1]) * (int)v_5) / ((-95 % (
                                                                  v_13 + 374) - (int)(! p)) + 728)) / (
                    (- p_15[0][0][2] + (long long)p_7) + 203LL));
  v_5 = (char)(- -157467249LL);
  result = (unsigned short)((unsigned long long)((int)(! (- p)) / (((int)v - (int)v_5) + 551)) / (
                            (unsigned long long)p_7 * ((p_9 + 21458386ULL) * (unsigned long long)(~ v_5)) + 388ULL));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 186198516
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p, double p_7, char p_9, unsigned char p_11)
{
  long long v_15;
  char v_13;
  short v_4;
  signed char v;
  char result;
  v_15 = 482494254LL;
  v_13 = (char)-31;
  result = (char)((long long)(- ((double)p + 6462197393.46) + (double)(
                              (int)(~ p_9) - (int)p_11 / ((int)v_13 + 705))) >> (
                  ! (v_15 - 197LL) / 233LL & 63LL));
  v_4 = (short)(((unsigned long)p + 4835UL) % ((unsigned long)(- p_7) + 175UL));
  v = (signed char)v_4;
  result = (char)((-38031LL * (long long)((int)result % 23470 + 111 % (
                                                                (int)v + 472))) / 23LL);
  return result;
}



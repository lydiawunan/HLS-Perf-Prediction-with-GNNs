#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 890448212
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p, unsigned int p_7, signed char p_11, unsigned long p_15[3],
          float p_19)
{
  short v_17;
  char v_13;
  unsigned long long v_9;
  unsigned char v_5;
  unsigned char v;
  short result;
  v_17 = (short)-29644;
  v = (unsigned char)p;
  result = (short)p_7;
  v_13 = (char)-126;
  v_5 = (unsigned char)((unsigned long)(((int)v_13 / -65129 - -92) + (int)(! v)) / (
                        (((unsigned long)p & 4294928306UL) + (unsigned long)result % (
                                                             p_15[2] + 758UL)) / (
                        (unsigned long)((float)v_17 - p_19 * 418511392.f) + 285UL) + 603UL));
  v_9 = (unsigned long long)(~ p_11);
  result = (short)((unsigned long long)1.83153220324e+38 % ((unsigned long long)(
                                                            3227425881UL % (unsigned long)(
                                                            (int)v + 736) + (unsigned long)(
                                                            (int)p * (int)p)) / (
                                                            (unsigned long long)(- v_5) / (
                                                            (unsigned long long)p_7 / (
                                                            v_9 + 632ULL) + 769ULL) + 743ULL) + 870ULL));
  return result;
}



//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 68392834
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p, int p_7, long p_11, char p_13)
{
  unsigned char v_15;
  unsigned char v_9;
  unsigned char v_4;
  signed char v;
  unsigned short result;
  v_15 = (unsigned char)p_11;
  v_9 = (unsigned char)169;
  result = (unsigned short)13571;
  v_4 = (unsigned char)(-93 / ((int)(- result) + 6));
  result = (unsigned short)(~ p);
  v = (signed char)(((unsigned long long)p ^ 353ULL) % (unsigned long long)(
                    ((int)(~ v_15) / (((int)p + 20522) + 82) >> ((int)(~ (! result)) & 31)) + 240));
  result = (unsigned short)((long)((64598 * (60 & (int)v)) % (((int)v_4 * (int)p) / (
                                                              - p_7 + 406) + 991)) / (
                            ~ ((long)(p_7 / ((int)v_9 + 964)) - p_11 % (long)(
                                                                (int)p_13 + 999)) + 969L));
  return result;
}



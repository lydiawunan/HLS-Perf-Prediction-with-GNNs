//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 880292098
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p, char p_5, double p_7, unsigned long p_11,
                   char p_13)
{
  signed char v_9;
  unsigned long v;
  unsigned short result;
  v = (unsigned long)8271243264.f;
  v_9 = (signed char)34;
  result = (unsigned short)((float)((unsigned long long)(975069458UL << (
                                                         (int)(~ v_9) & 31)) + 
                                    ((unsigned long long)p_11 % 15678ULL) % 4294938365ULL) + 
                            3.00029420185e+37f / ((4308762112.f - (float)(
                                                   v % (unsigned long)(
                                                   (int)p_13 + 915))) + 506.f));
  result = (unsigned short)((((unsigned long)(! p) + ~ v) / (unsigned long)(
                             ~ ((long)p % 31760L) + 380L)) % (unsigned long)(
                            (int)p_5 / ((99 - (int)((unsigned char)p_7)) / (
                                        ((int)((unsigned short)-268.51335333) + (int)result) + 439) + 396) + 693));
  return result;
}



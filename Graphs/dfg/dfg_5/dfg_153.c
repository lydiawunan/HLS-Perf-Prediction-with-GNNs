//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 862516652
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p[3][1], float p_5, char p_7, short p_9,
          double p_11)
{
  long v_15;
  unsigned int v_13;
  signed char v;
  short result;
  v_15 = 5398L;
  v_13 = (unsigned int)p_7;
  result = (short)(0ULL - (unsigned long long)(- ((unsigned int)p_5 + v_13) >> (
                                               (32066L - v_15) & 31L)));
  v = (signed char)((- ((double)p_9 - p_11) + 0.) - (double)((float)(
                                                             (unsigned long long)(
                                                             1398 * (int)result) - 
                                                             761804548ULL % (
                                                             p[2][0] + 195ULL)) * p_5));
  result = (short)0;
  result = (short)(((unsigned long long)(516L / (long)(((int)result - (int)v) + 496)) | p[2][0]) + (unsigned long long)(- (
                   (float)(! p[0][0]) - - p_5)));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 75227454
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long p[1][5][4], unsigned int p_7[1][1][4],
                       unsigned short p_9, unsigned int p_11[1][3][4],
                       double p_15[1][1])
{
  char v_27;
  long long v_25;
  signed char v_23;
  unsigned int v_21;
  unsigned char v_19;
  unsigned char v_17;
  float v_13;
  signed char v_5;
  float v;
  unsigned long long result;
  v_27 = (char)109;
  v_25 = (long long)p_15[0][0];
  v_23 = (signed char)-28;
  v_21 = p_11[0][1][3];
  v_19 = (unsigned char)13;
  v_17 = (unsigned char)137;
  v_13 = (float)p_7[0][0][2];
  v = 639938432.f;
  result = 4986ULL;
  if (4207807308UL + (unsigned long)(! v_21) == (unsigned long)((4294906262U + v_21) ^ (unsigned int)(
                                                                (int)(~ v_23) + 48))) {
    v_23 = (signed char)((! v_25 % (long long)(p[0][1][0] / -49L + 1004L)) % (long long)(
                         (unsigned int)v_27 % (p_11[0][1][2] + 23U) + 384U));
    v_21 = (unsigned int)(v_13 * (v_13 - 6512460288.f));
    v_19 = (unsigned char)(- (v_13 * v) - (float)(- p_11[0][1][0] & (unsigned int)(- v_23)));
  }
  else {
    v_21 = (unsigned int)((long)((double)p_9 - 394.736677103) / ((p[0][0][0] + (long)p_9) + 915L) + 588056937L);
    v_17 = (unsigned char)v_21;
    v_13 = (float)v_23;
  }
  if ((double)(- ((unsigned int)v_17 % (v_21 + 630U)) / (unsigned int)(
               (int)(~ p_9) + 114)) <= (double)(! result) * 117.796236396 - 4294919933.) {
    v = (float)(! ((long long)p_15[0][0] + 94842152LL) | (long long)(
                (int)(- v_17) - (int)(- v_19)));
    v_5 = (signed char)(((unsigned int)p_9 ^ (p_11[0][0][2] - (unsigned int)v_13)) + 4294967225U);
    result = (unsigned long long)((float)(! (! p[0][3][3])) - v / ((float)(
                                                                   (unsigned int)v_5 % (
                                                                   p_7[0][0][0] + 596U)) + 468.f));
  }
  else result = 786839807ULL;
  return result;
}



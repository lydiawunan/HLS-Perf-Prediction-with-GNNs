#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 626211657
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned int p, unsigned short p_7[5][3], char p_11[1][5],
         double p_21, short p_27)
{
  float v_25;
  double v_23;
  char v_19;
  double v_17;
  short v_15;
  unsigned short v_13;
  int v_9;
  int v_5;
  unsigned int v;
  char result;
  v_25 = -1.43796655721e+38f;
  v_23 = (double)p_7[4][2];
  v_19 = (char)p_21;
  v_17 = -73.141844049;
  v_15 = (short)p_11[0][3];
  v_13 = (unsigned short)p;
  v_9 = -27875;
  v_5 = (int)p_21;
  if ((double)((int)(! p_7[3][0]) | ((v_9 + 181) + (int)((float)p_7[0][0] * v_25))) > - (
      (double)(-16917 / ((int)p_27 + 776)) * (v_23 + p_21))) {
    v_9 = (int)((unsigned int)((int)p_7[4][0] % (((int)v_15 + 5978) + 247)) ^ - (
                p % ((unsigned int)v_17 + 177U)));
    v_5 = (int)v_13;
    result = (char)(~ (50193 / (v_5 + 587) & (int)((char)2.6972542129e+38f) * -127));
  }
  else {
    v_23 = (double)((0 / (((int)p_11[0][4] + (int)p_11[0][4]) + 704)) / (
                    (int)(- p_21) + 223));
    v_19 = (char)((float)((long)(- v_25) | (734798967L ^ (long)v_19)) - (
                  (float)(~ p_27) - -565.398376465f));
    result = (char)(- ((double)v_19 * p_21 + v_23));
  }
  if (- (! (p + (unsigned int)p_11[0][2])) > (unsigned int)result) result = (char)95;
  else {
    v = (unsigned int)((v_5 + (int)p_7[0][2]) - ~ v_9);
    v = v;
    result = (char)(p * - v);
  }
  return result;
}



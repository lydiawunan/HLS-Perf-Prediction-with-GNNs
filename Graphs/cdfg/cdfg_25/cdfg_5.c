#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 999378593
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p, signed char p_11, unsigned char p_17,
          unsigned long long p_19, signed char p_21)
{
  int v_15;
  signed char v_13;
  int v_9;
  long v_7;
  unsigned int v_5;
  unsigned long v;
  float result;
  v_13 = p_21;
  v_9 = -557881394;
  result = (float)p_21;
  if (- ((float)v_13 + p) * (float)(p_19 ^ 18446744072674231876ULL) > 20981.f) {
    v_13 = (signed char)(- -190437612LL);
    v_15 = ((int)p_21 / -520578987) % (v_9 + 141);
    result = (float)(((int)((signed char)p) ^ 83) % 133);
  }
  else {
    v_15 = (int)((long long)(~ p_21) * -19784LL);
    v_9 = ((int)p_21 / ((int)p_17 + 355) ^ (int)p_17 * (int)p_21) / 307673581;
    v_13 = (signed char)((unsigned int)(! (-89 % ((int)p_11 + 483))) | (
                         (unsigned int)(- p) - 3733483661U % (unsigned int)(
                                               v_9 + 609)));
  }
  if (((28280ULL | (unsigned long long)-1311960104.2) - (unsigned long long)(! v_13)) % (unsigned long long)(
      - (v_15 / ((int)p_11 + 125)) + 824) < (unsigned long long)(7928649726.97 * (double)(! p_17)) - p_19) {
    v_5 = 6912U;
    v = (unsigned long)((unsigned int)(- p) / (~ v_5 + 587U) + (unsigned int)(
                        (int)((unsigned short)p) % 8837 - 69));
    result = (float)(~ (4294922865UL / ((v + 895317899UL) + 429UL)));
  }
  else {
    v = (unsigned long)(! (! 18446744072676982081ULL));
    v_7 = (25180L - (long)(result - -55918.f)) - (long)(p * - p);
    result = (float)(- (v % (unsigned long)(v_7 + 1023L))) - ((float)v_9 - p) * (float)(
                                                             (int)((signed char)700.38067627f) - (int)p_11);
  }
  return result;
}



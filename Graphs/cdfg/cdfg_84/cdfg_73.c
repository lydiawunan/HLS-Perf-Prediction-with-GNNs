#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 256201430
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(double p, float p_9, unsigned long long p_11, unsigned long p_13,
        long p_15[4])
{
  unsigned long long v_23;
  long long v_21;
  unsigned char v_19;
  char v_17;
  short v_6;
  long long v_4;
  unsigned long long v;
  int result;
  v_23 = 30317ULL;
  v_21 = 298613168LL;
  v_19 = (unsigned char)29;
  v_17 = (char)p_11;
  v_6 = (short)31649;
  if ((double)((unsigned long)((int)((unsigned short)((float)v_23 + p_9)) % 60824) * (
               (p_13 / (unsigned long)((int)v_6 + 880)) / 99108773UL)) < 
      - (p / 4294906838.) + (double)(-783576256L - (long)(p / 711.))) {
    v_6 = (short)((p_13 % (unsigned long)(p_15[0] + 900L) - (unsigned long)(
                   (int)v_17 / 4151)) - (unsigned long)((int)((unsigned char)(- p_9)) * (int)v_19));
    v = (unsigned long long)((double)((int)v_6 / ((int)((short)p) + 51)) / (
                             ((double)p_9 * p - (double)(10775ULL ^ p_11)) + 394.));
    v_4 = (long long)(- 927285436.342);
  }
  else {
    v_19 = (unsigned char)(- (4575715744ULL | (unsigned long long)v_19 * 38798ULL));
    v_4 = (long long)((36 >> ((14L - p_15[3]) & 7L)) % ((int)((float)(
                                                              (long long)p_13 | v_21) * (
                                                              -533.534851074f / (
                                                              (float)v_19 + 765.f))) + 155));
    v = (unsigned long long)p;
  }
  result = (int)((356854904ULL + v) + (unsigned long long)v_4);
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 142504227
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long long p, char p_5, float p_11,
                  unsigned short p_17, short p_19)
{
  unsigned long v_29;
  unsigned short v_27;
  unsigned char v_25;
  unsigned char v_23;
  float v_21;
  unsigned long long v_15;
  float v_13;
  long long v_9;
  float v_7;
  char v;
  unsigned long result;
  v_29 = 15059UL;
  v_27 = (unsigned short)22525;
  v_25 = (unsigned char)p;
  v_23 = (unsigned char)245;
  v_21 = (float)p_19;
  v_9 = -622300925LL;
  v_7 = -1.65195591691e+38f;
  result = (unsigned long)p_11;
  while ((long long)(- (-987377920.f / (p_11 + 738.f))) + ((long long)(
                                                           81 / ((int)v_25 + 345)) | (
                                                           v_9 - v_9)) == (long long)v_7) {
    v_21 = v_29 / (unsigned long)(((int)v_27 >> 4) + 825);
    v_15 = (unsigned long long)(! (! (-51 * (int)((char)-5.15691432269e+37))));
    v_9 = (long long)v_23;
    v_25 = (unsigned char)(! (v_15 % (p + 380ULL)));
  }
  while_0_break: ;
  if ((int)(- v_23) - (int)((unsigned char)((float)((int)p_11 / -26829) - - p_11)) <= - (- (
      (int)((unsigned char)v_21) + (int)v_25))) {
    v = (char)((unsigned long long)((long long)((unsigned long)1.73906472706e+38 * 646412043UL) + 
                                    v_9 % (v_9 + 518LL)) - (19903ULL + (unsigned long long)(~ result)));
    v = (char)(- ((float)((int)v * (int)p_5) * v_7));
    result = (unsigned long)(((unsigned long long)v / (! p + 590ULL)) * (unsigned long long)(
                             ~ result % (~ result + 735UL)));
  }
  else {
    v_15 = (unsigned long long)((float)(- (~ p_17)) / (- ((float)p_19 - v_21) + 605.f));
    v_13 = (float)v_15;
    result = (unsigned long)(- (- (p_11 - v_13)));
  }
  return result;
}



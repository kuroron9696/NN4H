#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_845_51324880;

SignalI base_51525920_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makebase_51525920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51525920_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)my__interpolator_58_845_51324880;
   signalI->name = "base";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI next__data_51711620_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makenext__data_51711620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51711620_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)my__interpolator_58_845_51324880;
   signalI->name = "next_data";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI change_53631480_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makechange_53631480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_53631480_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)my__interpolator_58_845_51324880;
   signalI->name = "change";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI remaining_53917580_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeremaining_53917580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_53917580_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)my__interpolator_58_845_51324880;
   signalI->name = "remaining";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI interpolated__value_54027320_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeinterpolated__value_54027320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_54027320_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)my__interpolator_58_845_51324880;
   signalI->name = "interpolated_value";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Block __77595220;

void code__77595220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = base_51525920_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
            dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0,src1,dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = ({
                                    Value src0,src1,dst = get_value();
                                    unsigned int pool_state = get_value_pos();
                                    src0 = next__data_51711620_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
                                    src1 = base_51525920_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_53917580_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__77616720();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_54027320_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77595220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77595220 = block;
   block->owner = (Object)__77618580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77595220;

   return block;
};

Value make__77616720() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_84_46861660;

Scope __46860920;

Scope make__46860920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46860920 = scope;
   scope->owner = (Object)my__interpolator_58_84_46861660;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __77618580;

Behavior make__77618580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77618580 = behavior;
   behavior->owner = (Object)my__interpolator_58_84_46861660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_51525920_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   base_51525920_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   base_51525920_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(base_51525920_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,base_51525920_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
base_51525920_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[base_51525920_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_51711620_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   next__data_51711620_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   next__data_51711620_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(next__data_51711620_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,next__data_51711620_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
next__data_51711620_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[next__data_51711620_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_53917580_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   remaining_53917580_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   remaining_53917580_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(remaining_53917580_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,remaining_53917580_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
remaining_53917580_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[remaining_53917580_my__interpolator_58_845_51324880_func0_58_84_55068660_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77595220();

   return behavior;
}

Scope makemy__interpolator_58_84_46861660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_84_46861660 = scope;
   scope->owner = (Object)my__interpolator_58_845_51324880;
   scope->name = "my_interpolator:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__46860920();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__77618580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_845_51324880() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_845_51324880 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T5";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makebase_51525920();
   systemT->inputs[1] = makenext__data_51711620();
   systemT->inputs[2] = makechange_53631480();
   systemT->inputs[3] = makeremaining_53917580();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_54027320();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_84_46861660();

   return systemT;
}
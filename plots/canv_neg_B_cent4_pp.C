{
//=========Macro generated from canvas: canv_neg_B_cent4_pp/canv_neg_B_cent4_pp
//=========  (Tue Sep 30 17:57:19 2014) by ROOT version5.34/21
   TCanvas *canv_neg_B_cent4_pp = new TCanvas("canv_neg_B_cent4_pp", "canv_neg_B_cent4_pp",0,0,700,500);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canv_neg_B_cent4_pp->SetHighLightColor(2);
   canv_neg_B_cent4_pp->Range(0,0,1,1);
   canv_neg_B_cent4_pp->SetFillColor(0);
   canv_neg_B_cent4_pp->SetBorderMode(0);
   canv_neg_B_cent4_pp->SetBorderSize(2);
   canv_neg_B_cent4_pp->SetTickx(1);
   canv_neg_B_cent4_pp->SetTicky(1);
   canv_neg_B_cent4_pp->SetLeftMargin(0.16);
   canv_neg_B_cent4_pp->SetRightMargin(0.05);
   canv_neg_B_cent4_pp->SetTopMargin(0.05);
   canv_neg_B_cent4_pp->SetBottomMargin(0.16);
   canv_neg_B_cent4_pp->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c_1
   TPad *c_1 = new TPad("c_1", "c_1",0,0.008474576,1,0.9915254);
   c_1->Draw();
   c_1->cd();
   c_1->Range(-3.5,-2446.54,2.827273,3258.188);
   c_1->SetFillColor(0);
   c_1->SetBorderMode(0);
   c_1->SetBorderSize(2);
   c_1->SetTickx(1);
   c_1->SetTicky(1);
   c_1->SetLeftMargin(0.158046);
   c_1->SetRightMargin(0.05172414);
   c_1->SetTopMargin(0.04525862);
   c_1->SetBottomMargin(0.4288793);
   c_1->SetFrameBorderMode(0);
   Double_t xAxis93[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *pp_B_Cw_hNegEff_pt0_cent4_total__93 = new TH1D("pp_B_Cw_hNegEff_pt0_cent4_total__93","mu^{-},eff,all eta (total)",11, xAxis93);
   pp_B_Cw_hNegEff_pt0_cent4_total__93->SetBinContent(1,1672);
   pp_B_Cw_hNegEff_pt0_cent4_total__93->SetBinContent(2,2925);
   pp_B_Cw_hNegEff_pt0_cent4_total__93->SetBinContent(3,2960);
   pp_B_Cw_hNegEff_pt0_cent4_total__93->SetBinContent(4,3098);
   pp_B_Cw_hNegEff_pt0_cent4_total__93->SetBinContent(5,3593);
   pp_B_Cw_hNegEff_pt0_cent4_total__93->SetBinContent(6,1418);
   pp_B_Cw_hNegEff_pt0_cent4_total__93->SetBinContent(7,3850);
   pp_B_Cw_hNegEff_pt0_cent4_total__93->SetBinContent(8,3360);
   pp_B_Cw_hNegEff_pt0_cent4_total__93->SetBinContent(9,3493);
   pp_B_Cw_hNegEff_pt0_cent4_total__93->SetBinContent(10,3670);
   pp_B_Cw_hNegEff_pt0_cent4_total__93->SetBinContent(11,2519);
   pp_B_Cw_hNegEff_pt0_cent4_total__93->SetMinimum(0.1);
   pp_B_Cw_hNegEff_pt0_cent4_total__93->SetMaximum(4100);
   pp_B_Cw_hNegEff_pt0_cent4_total__93->SetEntries(32558);
   pp_B_Cw_hNegEff_pt0_cent4_total__93->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   pp_B_Cw_hNegEff_pt0_cent4_total__93->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   pp_B_Cw_hNegEff_pt0_cent4_total__93->SetLineColor(ci);
   pp_B_Cw_hNegEff_pt0_cent4_total__93->GetXaxis()->SetTitle("#eta_{lab}^{#mu}");
   pp_B_Cw_hNegEff_pt0_cent4_total__93->GetXaxis()->SetLabelFont(42);
   pp_B_Cw_hNegEff_pt0_cent4_total__93->GetXaxis()->SetLabelSize(0.035);
   pp_B_Cw_hNegEff_pt0_cent4_total__93->GetXaxis()->SetTitleSize(0.035);
   pp_B_Cw_hNegEff_pt0_cent4_total__93->GetXaxis()->SetTitleFont(42);
   pp_B_Cw_hNegEff_pt0_cent4_total__93->GetYaxis()->SetTitle("Events");
   pp_B_Cw_hNegEff_pt0_cent4_total__93->GetYaxis()->SetLabelFont(42);
   pp_B_Cw_hNegEff_pt0_cent4_total__93->GetYaxis()->SetLabelSize(0.035);
   pp_B_Cw_hNegEff_pt0_cent4_total__93->GetYaxis()->SetTitleSize(0.035);
   pp_B_Cw_hNegEff_pt0_cent4_total__93->GetYaxis()->SetTitleFont(42);
   pp_B_Cw_hNegEff_pt0_cent4_total__93->GetZaxis()->SetLabelFont(42);
   pp_B_Cw_hNegEff_pt0_cent4_total__93->GetZaxis()->SetLabelSize(0.035);
   pp_B_Cw_hNegEff_pt0_cent4_total__93->GetZaxis()->SetTitleSize(0.035);
   pp_B_Cw_hNegEff_pt0_cent4_total__93->GetZaxis()->SetTitleFont(42);
   pp_B_Cw_hNegEff_pt0_cent4_total__93->Draw("hist");
   Double_t xAxis94[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *pp_B_Cw_hNegEff_pt0_cent4_passed__94 = new TH1D("pp_B_Cw_hNegEff_pt0_cent4_passed__94","mu^{-},eff,all eta (passed)",11, xAxis94);
   pp_B_Cw_hNegEff_pt0_cent4_passed__94->SetBinContent(1,979);
   pp_B_Cw_hNegEff_pt0_cent4_passed__94->SetBinContent(2,2414);
   pp_B_Cw_hNegEff_pt0_cent4_passed__94->SetBinContent(3,2297);
   pp_B_Cw_hNegEff_pt0_cent4_passed__94->SetBinContent(4,2076);
   pp_B_Cw_hNegEff_pt0_cent4_passed__94->SetBinContent(5,2802);
   pp_B_Cw_hNegEff_pt0_cent4_passed__94->SetBinContent(6,505);
   pp_B_Cw_hNegEff_pt0_cent4_passed__94->SetBinContent(7,3016);
   pp_B_Cw_hNegEff_pt0_cent4_passed__94->SetBinContent(8,2209);
   pp_B_Cw_hNegEff_pt0_cent4_passed__94->SetBinContent(9,2635);
   pp_B_Cw_hNegEff_pt0_cent4_passed__94->SetBinContent(10,2985);
   pp_B_Cw_hNegEff_pt0_cent4_passed__94->SetBinContent(11,1735);
   pp_B_Cw_hNegEff_pt0_cent4_passed__94->SetEntries(23653);
   pp_B_Cw_hNegEff_pt0_cent4_passed__94->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   pp_B_Cw_hNegEff_pt0_cent4_passed__94->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   pp_B_Cw_hNegEff_pt0_cent4_passed__94->SetLineColor(ci);
   pp_B_Cw_hNegEff_pt0_cent4_passed__94->GetXaxis()->SetLabelFont(42);
   pp_B_Cw_hNegEff_pt0_cent4_passed__94->GetXaxis()->SetLabelSize(0.035);
   pp_B_Cw_hNegEff_pt0_cent4_passed__94->GetXaxis()->SetTitleSize(0.035);
   pp_B_Cw_hNegEff_pt0_cent4_passed__94->GetXaxis()->SetTitleFont(42);
   pp_B_Cw_hNegEff_pt0_cent4_passed__94->GetYaxis()->SetLabelFont(42);
   pp_B_Cw_hNegEff_pt0_cent4_passed__94->GetYaxis()->SetLabelSize(0.035);
   pp_B_Cw_hNegEff_pt0_cent4_passed__94->GetYaxis()->SetTitleSize(0.035);
   pp_B_Cw_hNegEff_pt0_cent4_passed__94->GetYaxis()->SetTitleFont(42);
   pp_B_Cw_hNegEff_pt0_cent4_passed__94->GetZaxis()->SetLabelFont(42);
   pp_B_Cw_hNegEff_pt0_cent4_passed__94->GetZaxis()->SetLabelSize(0.035);
   pp_B_Cw_hNegEff_pt0_cent4_passed__94->GetZaxis()->SetTitleSize(0.035);
   pp_B_Cw_hNegEff_pt0_cent4_passed__94->GetZaxis()->SetTitleFont(42);
   pp_B_Cw_hNegEff_pt0_cent4_passed__94->Draw("histsame");
   Double_t xAxis95[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *pp_B_Cw_hNegEff_pt0_cent4_total__95 = new TH1D("pp_B_Cw_hNegEff_pt0_cent4_total__95","mu^{-},eff,all eta (total)",11, xAxis95);
   pp_B_Cw_hNegEff_pt0_cent4_total__95->SetBinContent(1,1672);
   pp_B_Cw_hNegEff_pt0_cent4_total__95->SetBinContent(2,2925);
   pp_B_Cw_hNegEff_pt0_cent4_total__95->SetBinContent(3,2960);
   pp_B_Cw_hNegEff_pt0_cent4_total__95->SetBinContent(4,3098);
   pp_B_Cw_hNegEff_pt0_cent4_total__95->SetBinContent(5,3593);
   pp_B_Cw_hNegEff_pt0_cent4_total__95->SetBinContent(6,1418);
   pp_B_Cw_hNegEff_pt0_cent4_total__95->SetBinContent(7,3850);
   pp_B_Cw_hNegEff_pt0_cent4_total__95->SetBinContent(8,3360);
   pp_B_Cw_hNegEff_pt0_cent4_total__95->SetBinContent(9,3493);
   pp_B_Cw_hNegEff_pt0_cent4_total__95->SetBinContent(10,3670);
   pp_B_Cw_hNegEff_pt0_cent4_total__95->SetBinContent(11,2519);
   pp_B_Cw_hNegEff_pt0_cent4_total__95->SetMinimum(0.1);
   pp_B_Cw_hNegEff_pt0_cent4_total__95->SetMaximum(4100);
   pp_B_Cw_hNegEff_pt0_cent4_total__95->SetEntries(32558);
   pp_B_Cw_hNegEff_pt0_cent4_total__95->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   pp_B_Cw_hNegEff_pt0_cent4_total__95->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   pp_B_Cw_hNegEff_pt0_cent4_total__95->SetLineColor(ci);
   pp_B_Cw_hNegEff_pt0_cent4_total__95->GetXaxis()->SetTitle("#eta_{lab}^{#mu}");
   pp_B_Cw_hNegEff_pt0_cent4_total__95->GetXaxis()->SetLabelFont(42);
   pp_B_Cw_hNegEff_pt0_cent4_total__95->GetXaxis()->SetLabelSize(0.035);
   pp_B_Cw_hNegEff_pt0_cent4_total__95->GetXaxis()->SetTitleSize(0.035);
   pp_B_Cw_hNegEff_pt0_cent4_total__95->GetXaxis()->SetTitleFont(42);
   pp_B_Cw_hNegEff_pt0_cent4_total__95->GetYaxis()->SetTitle("Events");
   pp_B_Cw_hNegEff_pt0_cent4_total__95->GetYaxis()->SetLabelFont(42);
   pp_B_Cw_hNegEff_pt0_cent4_total__95->GetYaxis()->SetLabelSize(0.035);
   pp_B_Cw_hNegEff_pt0_cent4_total__95->GetYaxis()->SetTitleSize(0.035);
   pp_B_Cw_hNegEff_pt0_cent4_total__95->GetYaxis()->SetTitleFont(42);
   pp_B_Cw_hNegEff_pt0_cent4_total__95->GetZaxis()->SetLabelFont(42);
   pp_B_Cw_hNegEff_pt0_cent4_total__95->GetZaxis()->SetLabelSize(0.035);
   pp_B_Cw_hNegEff_pt0_cent4_total__95->GetZaxis()->SetTitleSize(0.035);
   pp_B_Cw_hNegEff_pt0_cent4_total__95->GetZaxis()->SetTitleFont(42);
   pp_B_Cw_hNegEff_pt0_cent4_total__95->Draw("sameaxis");
   TLatex *   tex = new TLatex(0.6221264,0.4892241,"pp(PeriodB), #mu^{-} 30-40%");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04310345);
   tex->SetLineWidth(2);
   tex->Draw();
  
// ------------>Primitives in pad: c_2
   c_2 = new TPad("c_2", "c_2",0,0.00862069,1,0.4331897);
   c_2->Draw();
   c_2->cd();
   c_2->Range(-3.5,-0.08581081,2.827273,1.112162);
   c_2->SetFillColor(0);
   c_2->SetBorderMode(0);
   c_2->SetBorderSize(2);
   c_2->SetTickx(1);
   c_2->SetTicky(1);
   c_2->SetLeftMargin(0.158046);
   c_2->SetRightMargin(0.05172414);
   c_2->SetTopMargin(0.01015228);
   c_2->SetBottomMargin(0.2385787);
   c_2->SetFrameBorderMode(0);
   Double_t xAxis96[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1F *hdummy__96 = new TH1F("hdummy__96","hdummy",11, xAxis96);
   hdummy__96->SetMinimum(0.2);
   hdummy__96->SetMaximum(1.1);
   hdummy__96->SetDirectory(0);
   hdummy__96->SetStats(0);
   hdummy__96->SetLineWidth(2);
   hdummy__96->SetMarkerStyle(20);
   hdummy__96->SetMarkerSize(1.2);
   hdummy__96->GetXaxis()->SetTitle("#eta^{#mu}");
   hdummy__96->GetXaxis()->SetLabelFont(42);
   hdummy__96->GetXaxis()->SetLabelSize(0.07);
   hdummy__96->GetXaxis()->SetTitleSize(0.1);
   hdummy__96->GetXaxis()->SetTitleOffset(0.87);
   hdummy__96->GetXaxis()->SetTitleFont(42);
   hdummy__96->GetYaxis()->SetTitle("C_{W}");
   hdummy__96->GetYaxis()->SetLabelFont(42);
   hdummy__96->GetYaxis()->SetLabelSize(0.07);
   hdummy__96->GetYaxis()->SetTitleSize(0.09);
   hdummy__96->GetYaxis()->SetTitleOffset(0.44);
   hdummy__96->GetYaxis()->SetTitleFont(42);
   hdummy__96->GetZaxis()->SetLabelFont(42);
   hdummy__96->GetZaxis()->SetLabelSize(0.05);
   hdummy__96->GetZaxis()->SetTitleSize(0.05);
   hdummy__96->GetZaxis()->SetTitleFont(42);
   hdummy__96->Draw("");
   Double_t xAxis24[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TEfficiency * pp_B_Cw_hNegEff_pt0_cent424 = new TEfficiency("pp_B_Cw_hNegEff_pt0_cent4","mu^{-},eff,all eta",11,xAxis24);
   
   pp_B_Cw_hNegEff_pt0_cent424->SetConfidenceLevel(0.6826895);
   pp_B_Cw_hNegEff_pt0_cent424->SetBetaAlpha(1);
   pp_B_Cw_hNegEff_pt0_cent424->SetBetaBeta(1);
   pp_B_Cw_hNegEff_pt0_cent424->SetWeight(0.08333333);
   pp_B_Cw_hNegEff_pt0_cent424->SetStatisticOption(0);
   pp_B_Cw_hNegEff_pt0_cent424->SetPosteriorMode(0);
   pp_B_Cw_hNegEff_pt0_cent424->SetShortestInterval(0);
   pp_B_Cw_hNegEff_pt0_cent424->SetTotalEvents(0,0);
   pp_B_Cw_hNegEff_pt0_cent424->SetPassedEvents(0,0);
   pp_B_Cw_hNegEff_pt0_cent424->SetTotalEvents(1,1672);
   pp_B_Cw_hNegEff_pt0_cent424->SetPassedEvents(1,979);
   pp_B_Cw_hNegEff_pt0_cent424->SetTotalEvents(2,2925);
   pp_B_Cw_hNegEff_pt0_cent424->SetPassedEvents(2,2414);
   pp_B_Cw_hNegEff_pt0_cent424->SetTotalEvents(3,2960);
   pp_B_Cw_hNegEff_pt0_cent424->SetPassedEvents(3,2297);
   pp_B_Cw_hNegEff_pt0_cent424->SetTotalEvents(4,3098);
   pp_B_Cw_hNegEff_pt0_cent424->SetPassedEvents(4,2076);
   pp_B_Cw_hNegEff_pt0_cent424->SetTotalEvents(5,3593);
   pp_B_Cw_hNegEff_pt0_cent424->SetPassedEvents(5,2802);
   pp_B_Cw_hNegEff_pt0_cent424->SetTotalEvents(6,1418);
   pp_B_Cw_hNegEff_pt0_cent424->SetPassedEvents(6,505);
   pp_B_Cw_hNegEff_pt0_cent424->SetTotalEvents(7,3850);
   pp_B_Cw_hNegEff_pt0_cent424->SetPassedEvents(7,3016);
   pp_B_Cw_hNegEff_pt0_cent424->SetTotalEvents(8,3360);
   pp_B_Cw_hNegEff_pt0_cent424->SetPassedEvents(8,2209);
   pp_B_Cw_hNegEff_pt0_cent424->SetTotalEvents(9,3493);
   pp_B_Cw_hNegEff_pt0_cent424->SetPassedEvents(9,2635);
   pp_B_Cw_hNegEff_pt0_cent424->SetTotalEvents(10,3670);
   pp_B_Cw_hNegEff_pt0_cent424->SetPassedEvents(10,2985);
   pp_B_Cw_hNegEff_pt0_cent424->SetTotalEvents(11,2519);
   pp_B_Cw_hNegEff_pt0_cent424->SetPassedEvents(11,1735);
   pp_B_Cw_hNegEff_pt0_cent424->SetTotalEvents(12,0);
   pp_B_Cw_hNegEff_pt0_cent424->SetPassedEvents(12,0);
   pp_B_Cw_hNegEff_pt0_cent424->SetFillColor(19);
   pp_B_Cw_hNegEff_pt0_cent424->Draw("pesame");
   c_2->Modified();
   c_1->cd();
   c_1->Modified();
   canv_neg_B_cent4_pp->cd();
   canv_neg_B_cent4_pp->Modified();
   canv_neg_B_cent4_pp->cd();
   canv_neg_B_cent4_pp->SetSelected(canv_neg_B_cent4_pp);
}

{
//=========Macro generated from canvas: canv_neg_A_cent3_np/canv_neg_A_cent3_np
//=========  (Tue Sep 30 17:57:17 2014) by ROOT version5.34/21
   TCanvas *canv_neg_A_cent3_np = new TCanvas("canv_neg_A_cent3_np", "canv_neg_A_cent3_np",0,0,700,500);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canv_neg_A_cent3_np->SetHighLightColor(2);
   canv_neg_A_cent3_np->Range(0,0,1,1);
   canv_neg_A_cent3_np->SetFillColor(0);
   canv_neg_A_cent3_np->SetBorderMode(0);
   canv_neg_A_cent3_np->SetBorderSize(2);
   canv_neg_A_cent3_np->SetTickx(1);
   canv_neg_A_cent3_np->SetTicky(1);
   canv_neg_A_cent3_np->SetLeftMargin(0.16);
   canv_neg_A_cent3_np->SetRightMargin(0.05);
   canv_neg_A_cent3_np->SetTopMargin(0.05);
   canv_neg_A_cent3_np->SetBottomMargin(0.16);
   canv_neg_A_cent3_np->SetFrameBorderMode(0);
  
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
   Double_t xAxis25[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *np_A_Cw_hNegEff_pt0_cent3_total__25 = new TH1D("np_A_Cw_hNegEff_pt0_cent3_total__25","mu^{-},eff,all eta (total)",11, xAxis25);
   np_A_Cw_hNegEff_pt0_cent3_total__25->SetBinContent(1,754);
   np_A_Cw_hNegEff_pt0_cent3_total__25->SetBinContent(2,1023);
   np_A_Cw_hNegEff_pt0_cent3_total__25->SetBinContent(3,902);
   np_A_Cw_hNegEff_pt0_cent3_total__25->SetBinContent(4,812);
   np_A_Cw_hNegEff_pt0_cent3_total__25->SetBinContent(5,802);
   np_A_Cw_hNegEff_pt0_cent3_total__25->SetBinContent(6,310);
   np_A_Cw_hNegEff_pt0_cent3_total__25->SetBinContent(7,827);
   np_A_Cw_hNegEff_pt0_cent3_total__25->SetBinContent(8,670);
   np_A_Cw_hNegEff_pt0_cent3_total__25->SetBinContent(9,676);
   np_A_Cw_hNegEff_pt0_cent3_total__25->SetBinContent(10,613);
   np_A_Cw_hNegEff_pt0_cent3_total__25->SetBinContent(11,357);
   np_A_Cw_hNegEff_pt0_cent3_total__25->SetMinimum(0.1);
   np_A_Cw_hNegEff_pt0_cent3_total__25->SetMaximum(1273);
   np_A_Cw_hNegEff_pt0_cent3_total__25->SetEntries(7746);
   np_A_Cw_hNegEff_pt0_cent3_total__25->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   np_A_Cw_hNegEff_pt0_cent3_total__25->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   np_A_Cw_hNegEff_pt0_cent3_total__25->SetLineColor(ci);
   np_A_Cw_hNegEff_pt0_cent3_total__25->GetXaxis()->SetTitle("#eta_{lab}^{#mu}");
   np_A_Cw_hNegEff_pt0_cent3_total__25->GetXaxis()->SetLabelFont(42);
   np_A_Cw_hNegEff_pt0_cent3_total__25->GetXaxis()->SetLabelSize(0.035);
   np_A_Cw_hNegEff_pt0_cent3_total__25->GetXaxis()->SetTitleSize(0.035);
   np_A_Cw_hNegEff_pt0_cent3_total__25->GetXaxis()->SetTitleFont(42);
   np_A_Cw_hNegEff_pt0_cent3_total__25->GetYaxis()->SetTitle("Events");
   np_A_Cw_hNegEff_pt0_cent3_total__25->GetYaxis()->SetLabelFont(42);
   np_A_Cw_hNegEff_pt0_cent3_total__25->GetYaxis()->SetLabelSize(0.035);
   np_A_Cw_hNegEff_pt0_cent3_total__25->GetYaxis()->SetTitleSize(0.035);
   np_A_Cw_hNegEff_pt0_cent3_total__25->GetYaxis()->SetTitleFont(42);
   np_A_Cw_hNegEff_pt0_cent3_total__25->GetZaxis()->SetLabelFont(42);
   np_A_Cw_hNegEff_pt0_cent3_total__25->GetZaxis()->SetLabelSize(0.035);
   np_A_Cw_hNegEff_pt0_cent3_total__25->GetZaxis()->SetTitleSize(0.035);
   np_A_Cw_hNegEff_pt0_cent3_total__25->GetZaxis()->SetTitleFont(42);
   np_A_Cw_hNegEff_pt0_cent3_total__25->Draw("hist");
   Double_t xAxis26[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *np_A_Cw_hNegEff_pt0_cent3_passed__26 = new TH1D("np_A_Cw_hNegEff_pt0_cent3_passed__26","mu^{-},eff,all eta (passed)",11, xAxis26);
   np_A_Cw_hNegEff_pt0_cent3_passed__26->SetBinContent(1,414);
   np_A_Cw_hNegEff_pt0_cent3_passed__26->SetBinContent(2,848);
   np_A_Cw_hNegEff_pt0_cent3_passed__26->SetBinContent(3,704);
   np_A_Cw_hNegEff_pt0_cent3_passed__26->SetBinContent(4,549);
   np_A_Cw_hNegEff_pt0_cent3_passed__26->SetBinContent(5,614);
   np_A_Cw_hNegEff_pt0_cent3_passed__26->SetBinContent(6,96);
   np_A_Cw_hNegEff_pt0_cent3_passed__26->SetBinContent(7,638);
   np_A_Cw_hNegEff_pt0_cent3_passed__26->SetBinContent(8,436);
   np_A_Cw_hNegEff_pt0_cent3_passed__26->SetBinContent(9,488);
   np_A_Cw_hNegEff_pt0_cent3_passed__26->SetBinContent(10,509);
   np_A_Cw_hNegEff_pt0_cent3_passed__26->SetBinContent(11,225);
   np_A_Cw_hNegEff_pt0_cent3_passed__26->SetEntries(5521);
   np_A_Cw_hNegEff_pt0_cent3_passed__26->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   np_A_Cw_hNegEff_pt0_cent3_passed__26->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   np_A_Cw_hNegEff_pt0_cent3_passed__26->SetLineColor(ci);
   np_A_Cw_hNegEff_pt0_cent3_passed__26->GetXaxis()->SetLabelFont(42);
   np_A_Cw_hNegEff_pt0_cent3_passed__26->GetXaxis()->SetLabelSize(0.035);
   np_A_Cw_hNegEff_pt0_cent3_passed__26->GetXaxis()->SetTitleSize(0.035);
   np_A_Cw_hNegEff_pt0_cent3_passed__26->GetXaxis()->SetTitleFont(42);
   np_A_Cw_hNegEff_pt0_cent3_passed__26->GetYaxis()->SetLabelFont(42);
   np_A_Cw_hNegEff_pt0_cent3_passed__26->GetYaxis()->SetLabelSize(0.035);
   np_A_Cw_hNegEff_pt0_cent3_passed__26->GetYaxis()->SetTitleSize(0.035);
   np_A_Cw_hNegEff_pt0_cent3_passed__26->GetYaxis()->SetTitleFont(42);
   np_A_Cw_hNegEff_pt0_cent3_passed__26->GetZaxis()->SetLabelFont(42);
   np_A_Cw_hNegEff_pt0_cent3_passed__26->GetZaxis()->SetLabelSize(0.035);
   np_A_Cw_hNegEff_pt0_cent3_passed__26->GetZaxis()->SetTitleSize(0.035);
   np_A_Cw_hNegEff_pt0_cent3_passed__26->GetZaxis()->SetTitleFont(42);
   np_A_Cw_hNegEff_pt0_cent3_passed__26->Draw("histsame");
   Double_t xAxis27[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *np_A_Cw_hNegEff_pt0_cent3_total__27 = new TH1D("np_A_Cw_hNegEff_pt0_cent3_total__27","mu^{-},eff,all eta (total)",11, xAxis27);
   np_A_Cw_hNegEff_pt0_cent3_total__27->SetBinContent(1,754);
   np_A_Cw_hNegEff_pt0_cent3_total__27->SetBinContent(2,1023);
   np_A_Cw_hNegEff_pt0_cent3_total__27->SetBinContent(3,902);
   np_A_Cw_hNegEff_pt0_cent3_total__27->SetBinContent(4,812);
   np_A_Cw_hNegEff_pt0_cent3_total__27->SetBinContent(5,802);
   np_A_Cw_hNegEff_pt0_cent3_total__27->SetBinContent(6,310);
   np_A_Cw_hNegEff_pt0_cent3_total__27->SetBinContent(7,827);
   np_A_Cw_hNegEff_pt0_cent3_total__27->SetBinContent(8,670);
   np_A_Cw_hNegEff_pt0_cent3_total__27->SetBinContent(9,676);
   np_A_Cw_hNegEff_pt0_cent3_total__27->SetBinContent(10,613);
   np_A_Cw_hNegEff_pt0_cent3_total__27->SetBinContent(11,357);
   np_A_Cw_hNegEff_pt0_cent3_total__27->SetMinimum(0.1);
   np_A_Cw_hNegEff_pt0_cent3_total__27->SetMaximum(1273);
   np_A_Cw_hNegEff_pt0_cent3_total__27->SetEntries(7746);
   np_A_Cw_hNegEff_pt0_cent3_total__27->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   np_A_Cw_hNegEff_pt0_cent3_total__27->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   np_A_Cw_hNegEff_pt0_cent3_total__27->SetLineColor(ci);
   np_A_Cw_hNegEff_pt0_cent3_total__27->GetXaxis()->SetTitle("#eta_{lab}^{#mu}");
   np_A_Cw_hNegEff_pt0_cent3_total__27->GetXaxis()->SetLabelFont(42);
   np_A_Cw_hNegEff_pt0_cent3_total__27->GetXaxis()->SetLabelSize(0.035);
   np_A_Cw_hNegEff_pt0_cent3_total__27->GetXaxis()->SetTitleSize(0.035);
   np_A_Cw_hNegEff_pt0_cent3_total__27->GetXaxis()->SetTitleFont(42);
   np_A_Cw_hNegEff_pt0_cent3_total__27->GetYaxis()->SetTitle("Events");
   np_A_Cw_hNegEff_pt0_cent3_total__27->GetYaxis()->SetLabelFont(42);
   np_A_Cw_hNegEff_pt0_cent3_total__27->GetYaxis()->SetLabelSize(0.035);
   np_A_Cw_hNegEff_pt0_cent3_total__27->GetYaxis()->SetTitleSize(0.035);
   np_A_Cw_hNegEff_pt0_cent3_total__27->GetYaxis()->SetTitleFont(42);
   np_A_Cw_hNegEff_pt0_cent3_total__27->GetZaxis()->SetLabelFont(42);
   np_A_Cw_hNegEff_pt0_cent3_total__27->GetZaxis()->SetLabelSize(0.035);
   np_A_Cw_hNegEff_pt0_cent3_total__27->GetZaxis()->SetTitleSize(0.035);
   np_A_Cw_hNegEff_pt0_cent3_total__27->GetZaxis()->SetTitleFont(42);
   np_A_Cw_hNegEff_pt0_cent3_total__27->Draw("sameaxis");
   TLatex *   tex = new TLatex(0.6221264,0.4892241,"np(PeriodA), #mu^{-} 20-30%");
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
   Double_t xAxis28[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1F *hdummy__28 = new TH1F("hdummy__28","hdummy",11, xAxis28);
   hdummy__28->SetMinimum(0.2);
   hdummy__28->SetMaximum(1.1);
   hdummy__28->SetDirectory(0);
   hdummy__28->SetStats(0);
   hdummy__28->SetLineWidth(2);
   hdummy__28->SetMarkerStyle(20);
   hdummy__28->SetMarkerSize(1.2);
   hdummy__28->GetXaxis()->SetTitle("#eta^{#mu}");
   hdummy__28->GetXaxis()->SetLabelFont(42);
   hdummy__28->GetXaxis()->SetLabelSize(0.07);
   hdummy__28->GetXaxis()->SetTitleSize(0.1);
   hdummy__28->GetXaxis()->SetTitleOffset(0.87);
   hdummy__28->GetXaxis()->SetTitleFont(42);
   hdummy__28->GetYaxis()->SetTitle("C_{W}");
   hdummy__28->GetYaxis()->SetLabelFont(42);
   hdummy__28->GetYaxis()->SetLabelSize(0.07);
   hdummy__28->GetYaxis()->SetTitleSize(0.09);
   hdummy__28->GetYaxis()->SetTitleOffset(0.44);
   hdummy__28->GetYaxis()->SetTitleFont(42);
   hdummy__28->GetZaxis()->SetLabelFont(42);
   hdummy__28->GetZaxis()->SetLabelSize(0.05);
   hdummy__28->GetZaxis()->SetTitleSize(0.05);
   hdummy__28->GetZaxis()->SetTitleFont(42);
   hdummy__28->Draw("");
   Double_t xAxis7[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TEfficiency * np_A_Cw_hNegEff_pt0_cent37 = new TEfficiency("np_A_Cw_hNegEff_pt0_cent3","mu^{-},eff,all eta",11,xAxis7);
   
   np_A_Cw_hNegEff_pt0_cent37->SetConfidenceLevel(0.6826895);
   np_A_Cw_hNegEff_pt0_cent37->SetBetaAlpha(1);
   np_A_Cw_hNegEff_pt0_cent37->SetBetaBeta(1);
   np_A_Cw_hNegEff_pt0_cent37->SetWeight(0.08333333);
   np_A_Cw_hNegEff_pt0_cent37->SetStatisticOption(0);
   np_A_Cw_hNegEff_pt0_cent37->SetPosteriorMode(0);
   np_A_Cw_hNegEff_pt0_cent37->SetShortestInterval(0);
   np_A_Cw_hNegEff_pt0_cent37->SetTotalEvents(0,0);
   np_A_Cw_hNegEff_pt0_cent37->SetPassedEvents(0,0);
   np_A_Cw_hNegEff_pt0_cent37->SetTotalEvents(1,754);
   np_A_Cw_hNegEff_pt0_cent37->SetPassedEvents(1,414);
   np_A_Cw_hNegEff_pt0_cent37->SetTotalEvents(2,1023);
   np_A_Cw_hNegEff_pt0_cent37->SetPassedEvents(2,848);
   np_A_Cw_hNegEff_pt0_cent37->SetTotalEvents(3,902);
   np_A_Cw_hNegEff_pt0_cent37->SetPassedEvents(3,704);
   np_A_Cw_hNegEff_pt0_cent37->SetTotalEvents(4,812);
   np_A_Cw_hNegEff_pt0_cent37->SetPassedEvents(4,549);
   np_A_Cw_hNegEff_pt0_cent37->SetTotalEvents(5,802);
   np_A_Cw_hNegEff_pt0_cent37->SetPassedEvents(5,614);
   np_A_Cw_hNegEff_pt0_cent37->SetTotalEvents(6,310);
   np_A_Cw_hNegEff_pt0_cent37->SetPassedEvents(6,96);
   np_A_Cw_hNegEff_pt0_cent37->SetTotalEvents(7,827);
   np_A_Cw_hNegEff_pt0_cent37->SetPassedEvents(7,638);
   np_A_Cw_hNegEff_pt0_cent37->SetTotalEvents(8,670);
   np_A_Cw_hNegEff_pt0_cent37->SetPassedEvents(8,436);
   np_A_Cw_hNegEff_pt0_cent37->SetTotalEvents(9,676);
   np_A_Cw_hNegEff_pt0_cent37->SetPassedEvents(9,488);
   np_A_Cw_hNegEff_pt0_cent37->SetTotalEvents(10,613);
   np_A_Cw_hNegEff_pt0_cent37->SetPassedEvents(10,509);
   np_A_Cw_hNegEff_pt0_cent37->SetTotalEvents(11,357);
   np_A_Cw_hNegEff_pt0_cent37->SetPassedEvents(11,225);
   np_A_Cw_hNegEff_pt0_cent37->SetTotalEvents(12,0);
   np_A_Cw_hNegEff_pt0_cent37->SetPassedEvents(12,0);
   np_A_Cw_hNegEff_pt0_cent37->SetFillColor(19);
   np_A_Cw_hNegEff_pt0_cent37->Draw("pesame");
   c_2->Modified();
   c_1->cd();
   c_1->Modified();
   canv_neg_A_cent3_np->cd();
   canv_neg_A_cent3_np->Modified();
   canv_neg_A_cent3_np->cd();
   canv_neg_A_cent3_np->SetSelected(canv_neg_A_cent3_np);
}

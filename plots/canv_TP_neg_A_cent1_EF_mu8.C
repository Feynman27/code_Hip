{
//=========Macro generated from canvas: canv_TP_neg_A_cent1_EF_mu8/canv_TP_neg_A_cent1_EF_mu8
//=========  (Mon Aug 25 21:09:26 2014) by ROOT version5.34/19
   TCanvas *canv_TP_neg_A_cent1_EF_mu8 = new TCanvas("canv_TP_neg_A_cent1_EF_mu8", "canv_TP_neg_A_cent1_EF_mu8",0,0,700,500);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canv_TP_neg_A_cent1_EF_mu8->Range(0,0,1,1);
   canv_TP_neg_A_cent1_EF_mu8->SetFillColor(0);
   canv_TP_neg_A_cent1_EF_mu8->SetBorderMode(0);
   canv_TP_neg_A_cent1_EF_mu8->SetBorderSize(2);
   canv_TP_neg_A_cent1_EF_mu8->SetTickx(1);
   canv_TP_neg_A_cent1_EF_mu8->SetTicky(1);
   canv_TP_neg_A_cent1_EF_mu8->SetLeftMargin(0.16);
   canv_TP_neg_A_cent1_EF_mu8->SetRightMargin(0.05);
   canv_TP_neg_A_cent1_EF_mu8->SetTopMargin(0.05);
   canv_TP_neg_A_cent1_EF_mu8->SetBottomMargin(0.16);
   canv_TP_neg_A_cent1_EF_mu8->SetFrameBorderMode(0);
  
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
   Double_t xAxis13[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *data_A_EF_mu8_hNegEff_pt0_cent1_total__13 = new TH1D("data_A_EF_mu8_hNegEff_pt0_cent1_total__13","mu^{-},eff,all eta (total)",11, xAxis13);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->SetBinContent(1,5);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->SetBinContent(2,8);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->SetBinContent(3,3);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->SetBinContent(4,5);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->SetBinContent(5,5);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->SetBinContent(6,1);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->SetBinContent(7,14);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->SetBinContent(8,13);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->SetBinContent(9,10);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->SetBinContent(10,5);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->SetBinContent(11,4);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->SetMinimum(0.1);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->SetMaximum(19);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->SetEntries(73);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->SetLineColor(ci);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->GetXaxis()->SetTitle("#eta_{lab}^{#mu}");
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->GetXaxis()->SetLabelFont(42);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->GetXaxis()->SetLabelSize(0.035);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->GetXaxis()->SetTitleSize(0.035);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->GetXaxis()->SetTitleFont(42);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->GetYaxis()->SetTitle("Probes");
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->GetYaxis()->SetLabelFont(42);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->GetYaxis()->SetLabelSize(0.035);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->GetYaxis()->SetTitleSize(0.035);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->GetYaxis()->SetTitleFont(42);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->GetZaxis()->SetLabelFont(42);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->GetZaxis()->SetLabelSize(0.035);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->GetZaxis()->SetTitleSize(0.035);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->GetZaxis()->SetTitleFont(42);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__13->Draw("hist");
   Double_t xAxis14[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *data_A_EF_mu8_hNegEff_pt0_cent1_passed__14 = new TH1D("data_A_EF_mu8_hNegEff_pt0_cent1_passed__14","mu^{-},eff,all eta (passed)",11, xAxis14);
   data_A_EF_mu8_hNegEff_pt0_cent1_passed__14->SetBinContent(1,4);
   data_A_EF_mu8_hNegEff_pt0_cent1_passed__14->SetBinContent(2,6);
   data_A_EF_mu8_hNegEff_pt0_cent1_passed__14->SetBinContent(3,3);
   data_A_EF_mu8_hNegEff_pt0_cent1_passed__14->SetBinContent(4,4);
   data_A_EF_mu8_hNegEff_pt0_cent1_passed__14->SetBinContent(5,4);
   data_A_EF_mu8_hNegEff_pt0_cent1_passed__14->SetBinContent(7,14);
   data_A_EF_mu8_hNegEff_pt0_cent1_passed__14->SetBinContent(8,8);
   data_A_EF_mu8_hNegEff_pt0_cent1_passed__14->SetBinContent(9,10);
   data_A_EF_mu8_hNegEff_pt0_cent1_passed__14->SetBinContent(10,5);
   data_A_EF_mu8_hNegEff_pt0_cent1_passed__14->SetBinContent(11,3);
   data_A_EF_mu8_hNegEff_pt0_cent1_passed__14->SetEntries(61);
   data_A_EF_mu8_hNegEff_pt0_cent1_passed__14->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   data_A_EF_mu8_hNegEff_pt0_cent1_passed__14->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   data_A_EF_mu8_hNegEff_pt0_cent1_passed__14->SetLineColor(ci);
   data_A_EF_mu8_hNegEff_pt0_cent1_passed__14->GetXaxis()->SetLabelFont(42);
   data_A_EF_mu8_hNegEff_pt0_cent1_passed__14->GetXaxis()->SetLabelSize(0.035);
   data_A_EF_mu8_hNegEff_pt0_cent1_passed__14->GetXaxis()->SetTitleSize(0.035);
   data_A_EF_mu8_hNegEff_pt0_cent1_passed__14->GetXaxis()->SetTitleFont(42);
   data_A_EF_mu8_hNegEff_pt0_cent1_passed__14->GetYaxis()->SetLabelFont(42);
   data_A_EF_mu8_hNegEff_pt0_cent1_passed__14->GetYaxis()->SetLabelSize(0.035);
   data_A_EF_mu8_hNegEff_pt0_cent1_passed__14->GetYaxis()->SetTitleSize(0.035);
   data_A_EF_mu8_hNegEff_pt0_cent1_passed__14->GetYaxis()->SetTitleFont(42);
   data_A_EF_mu8_hNegEff_pt0_cent1_passed__14->GetZaxis()->SetLabelFont(42);
   data_A_EF_mu8_hNegEff_pt0_cent1_passed__14->GetZaxis()->SetLabelSize(0.035);
   data_A_EF_mu8_hNegEff_pt0_cent1_passed__14->GetZaxis()->SetTitleSize(0.035);
   data_A_EF_mu8_hNegEff_pt0_cent1_passed__14->GetZaxis()->SetTitleFont(42);
   data_A_EF_mu8_hNegEff_pt0_cent1_passed__14->Draw("histsame");
   Double_t xAxis15[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *data_A_EF_mu8_hNegEff_pt0_cent1_total__15 = new TH1D("data_A_EF_mu8_hNegEff_pt0_cent1_total__15","mu^{-},eff,all eta (total)",11, xAxis15);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->SetBinContent(1,5);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->SetBinContent(2,8);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->SetBinContent(3,3);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->SetBinContent(4,5);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->SetBinContent(5,5);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->SetBinContent(6,1);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->SetBinContent(7,14);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->SetBinContent(8,13);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->SetBinContent(9,10);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->SetBinContent(10,5);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->SetBinContent(11,4);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->SetMinimum(0.1);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->SetMaximum(19);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->SetEntries(73);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->SetLineColor(ci);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->GetXaxis()->SetTitle("#eta_{lab}^{#mu}");
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->GetXaxis()->SetLabelFont(42);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->GetXaxis()->SetLabelSize(0.035);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->GetXaxis()->SetTitleSize(0.035);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->GetXaxis()->SetTitleFont(42);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->GetYaxis()->SetTitle("Probes");
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->GetYaxis()->SetLabelFont(42);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->GetYaxis()->SetLabelSize(0.035);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->GetYaxis()->SetTitleSize(0.035);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->GetYaxis()->SetTitleFont(42);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->GetZaxis()->SetLabelFont(42);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->GetZaxis()->SetLabelSize(0.035);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->GetZaxis()->SetTitleSize(0.035);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->GetZaxis()->SetTitleFont(42);
   data_A_EF_mu8_hNegEff_pt0_cent1_total__15->Draw("sameaxis");
   TLatex *   tex = new TLatex(0.6221264,0.4892241,"EF_mu8(PeriodA), #mu^{-} 5-10%");
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
   Double_t xAxis16[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1F *hdummy__16 = new TH1F("hdummy__16","hdummy",11, xAxis16);
   hdummy__16->SetMinimum(0.2);
   hdummy__16->SetMaximum(1.09);
   hdummy__16->SetDirectory(0);
   hdummy__16->SetStats(0);
   hdummy__16->SetLineWidth(2);
   hdummy__16->SetMarkerStyle(20);
   hdummy__16->SetMarkerSize(1.2);
   hdummy__16->GetXaxis()->SetTitle("#eta^{#mu}");
   hdummy__16->GetXaxis()->SetLabelFont(42);
   hdummy__16->GetXaxis()->SetLabelSize(0.07);
   hdummy__16->GetXaxis()->SetTitleSize(0.1);
   hdummy__16->GetXaxis()->SetTitleOffset(0.87);
   hdummy__16->GetXaxis()->SetTitleFont(42);
   hdummy__16->GetYaxis()->SetTitle("#epsilon");
   hdummy__16->GetYaxis()->SetLabelFont(42);
   hdummy__16->GetYaxis()->SetLabelSize(0.07);
   hdummy__16->GetYaxis()->SetTitleSize(0.09);
   hdummy__16->GetYaxis()->SetTitleOffset(0.44);
   hdummy__16->GetYaxis()->SetTitleFont(42);
   hdummy__16->GetZaxis()->SetLabelFont(42);
   hdummy__16->GetZaxis()->SetLabelSize(0.05);
   hdummy__16->GetZaxis()->SetTitleSize(0.05);
   hdummy__16->GetZaxis()->SetTitleFont(42);
   hdummy__16->Draw("");
   Double_t xAxis4[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TEfficiency * data_A_EF_mu8_hNegEff_pt0_cent14 = new TEfficiency("data_A_EF_mu8_hNegEff_pt0_cent1","mu^{-},eff,all eta",11,xAxis4);
   
   data_A_EF_mu8_hNegEff_pt0_cent14->SetConfidenceLevel(0.6826895);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetBetaAlpha(1);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetBetaBeta(1);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetWeight(0.08333333);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetStatisticOption(0);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetPosteriorMode(0);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetShortestInterval(0);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetTotalEvents(0,0);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetPassedEvents(0,0);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetTotalEvents(1,5);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetPassedEvents(1,4);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetTotalEvents(2,8);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetPassedEvents(2,6);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetTotalEvents(3,3);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetPassedEvents(3,3);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetTotalEvents(4,5);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetPassedEvents(4,4);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetTotalEvents(5,5);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetPassedEvents(5,4);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetTotalEvents(6,1);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetPassedEvents(6,0);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetTotalEvents(7,14);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetPassedEvents(7,14);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetTotalEvents(8,13);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetPassedEvents(8,8);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetTotalEvents(9,10);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetPassedEvents(9,10);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetTotalEvents(10,5);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetPassedEvents(10,5);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetTotalEvents(11,4);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetPassedEvents(11,3);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetTotalEvents(12,0);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetPassedEvents(12,0);
   data_A_EF_mu8_hNegEff_pt0_cent14->SetFillColor(19);
   data_A_EF_mu8_hNegEff_pt0_cent14->Draw("pesame");
   c_2->Modified();
   c_1->cd();
   c_1->Modified();
   canv_TP_neg_A_cent1_EF_mu8->cd();
   canv_TP_neg_A_cent1_EF_mu8->Modified();
   canv_TP_neg_A_cent1_EF_mu8->cd();
   canv_TP_neg_A_cent1_EF_mu8->SetSelected(canv_TP_neg_A_cent1_EF_mu8);
}

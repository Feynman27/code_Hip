{
//=========Macro generated from canvas: cPosA_cent1/cPosA_cent1
//=========  (Thu Aug 14 17:54:28 2014) by ROOT version5.34/19
   TCanvas *cPosA_cent1 = new TCanvas("cPosA_cent1", "cPosA_cent1",0,0,600,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cPosA_cent1->Range(0,0,1,1);
   cPosA_cent1->SetFillColor(0);
   cPosA_cent1->SetBorderMode(0);
   cPosA_cent1->SetBorderSize(2);
   cPosA_cent1->SetTickx(1);
   cPosA_cent1->SetTicky(1);
   cPosA_cent1->SetLeftMargin(0.16);
   cPosA_cent1->SetRightMargin(0.05);
   cPosA_cent1->SetTopMargin(0.05);
   cPosA_cent1->SetBottomMargin(0.16);
   cPosA_cent1->SetFrameBorderMode(0);
   
   TH1F *hdummy = new TH1F("hdummy","hdummy",50,-2.5,2.5);
   hdummy->SetMinimum(0);
   hdummy->SetMaximum(1.1);
   hdummy->SetStats(0);
   hdummy->SetLineWidth(2);
   hdummy->SetMarkerStyle(20);
   hdummy->SetMarkerSize(1.2);
   hdummy->GetXaxis()->SetTitle("#eta_{lab}^{#mu}");
   hdummy->GetXaxis()->SetLabelFont(42);
   hdummy->GetXaxis()->SetLabelSize(0.05);
   hdummy->GetXaxis()->SetTitleSize(0.05);
   hdummy->GetXaxis()->SetTitleOffset(1.4);
   hdummy->GetXaxis()->SetTitleFont(42);
   hdummy->GetYaxis()->SetTitle("#epsilon");
   hdummy->GetYaxis()->SetLabelFont(42);
   hdummy->GetYaxis()->SetLabelSize(0.05);
   hdummy->GetYaxis()->SetTitleSize(0.05);
   hdummy->GetYaxis()->SetTitleOffset(1.4);
   hdummy->GetYaxis()->SetTitleFont(42);
   hdummy->GetZaxis()->SetLabelFont(42);
   hdummy->GetZaxis()->SetLabelSize(0.05);
   hdummy->GetZaxis()->SetTitleSize(0.05);
   hdummy->GetZaxis()->SetTitleFont(42);
   hdummy->Draw("");
   TLatex *   tex = new TLatex(0.4891954,0.2944915,"Period A, #mu^{+}, 5-10%");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.4729885,0.2372881,"p_{T}^{#mu}>25GeV, p_{T}^{#nu}>25GeV, m_{T}>40 GeV");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2068966,0.875,"ATLAS Simulation");
tex->SetNDC();
   tex->SetTextFont(72);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.6342529,0.875,"Internal");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00ff00");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#00ff00");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   grae->SetPoint(0,-2.3,0.8586115);
   grae->SetPointError(0,0.2,0.2,0.01402239,0.0129946);
   grae->SetPoint(1,-1.825,0.8584177);
   grae->SetPointError(1,0.275,0.275,0.009609226,0.009105688);
   grae->SetPoint(2,-1.3,0.8500735);
   grae->SetPointError(2,0.25,0.25,0.009448633,0.008994005);
   grae->SetPoint(3,-0.825,0.9104013);
   grae->SetPointError(3,0.225,0.225,0.008257002,0.007647719);
   grae->SetPoint(4,-0.35,0.9200285);
   grae->SetPointError(4,0.25,0.25,0.00727837,0.006733303);
   grae->SetPoint(5,0,0.5314275);
   grae->SetPointError(5,0.1,0.1,0.02035626,0.02026552);
   grae->SetPoint(6,0.35,0.9331192);
   grae->SetPointError(6,0.25,0.25,0.006946958,0.006361964);
   grae->SetPoint(7,0.825,0.9207698);
   grae->SetPointError(7,0.225,0.225,0.008009674,0.007360683);
   grae->SetPoint(8,1.3,0.8798604);
   grae->SetPointError(8,0.25,0.25,0.009123787,0.008573297);
   grae->SetPoint(9,1.825,0.9184371);
   grae->SetPointError(9,0.275,0.275,0.007609435,0.007018274);
   grae->SetPoint(10,2.3,0.892371);
   grae->SetPointError(10,0.2,0.2,0.0105875,0.009765413);
   grae->Draw("pe ");
   
   grae = new TGraphAsymmErrors(11);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(21);
   grae->SetMarkerSize(1.2);
   grae->SetPoint(0,-2.3,0.854998);
   grae->SetPointError(0,0.2,0.2,0.01415052,0.01313331);
   grae->SetPoint(1,-1.825,0.8543645);
   grae->SetPointError(1,0.275,0.275,0.009714856,0.009217351);
   grae->SetPoint(2,-1.3,0.8459714);
   grae->SetPointError(2,0.25,0.25,0.0095437,0.009094417);
   grae->SetPoint(3,-0.825,0.902801);
   grae->SetPointError(3,0.225,0.225,0.008534866,0.007938325);
   grae->SetPoint(4,-0.35,0.9124685);
   grae->SetPointError(4,0.25,0.25,0.007556867,0.007022664);
   grae->SetPoint(5,0,0.5263292);
   grae->SetPointError(5,0.1,0.1,0.02036244,0.02028712);
   grae->SetPoint(6,0.35,0.9271221);
   grae->SetPointError(6,0.25,0.25,0.007198583,0.006622977);
   grae->SetPoint(7,0.825,0.9132728);
   grae->SetPointError(7,0.225,0.225,0.008308579,0.00767252);
   grae->SetPoint(8,1.3,0.8752668);
   grae->SetPointError(8,0.25,0.25,0.009256597,0.008712922);
   grae->SetPoint(9,1.825,0.9145814);
   grae->SetPointError(9,0.275,0.275,0.007758299,0.007173355);
   grae->SetPoint(10,2.3,0.8876625);
   grae->SetPointError(10,0.2,0.2,0.01076613,0.00995498);
   grae->Draw("pe ");
   
   grae = new TGraphAsymmErrors(11);
   grae->SetName("Graph2");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(23);
   grae->SetMarkerSize(1.2);
   grae->SetPoint(0,-2.3,0.8491333);
   grae->SetPointError(0,0.2,0.2,0.01435148,0.01335118);
   grae->SetPoint(1,-1.825,0.8520963);
   grae->SetPointError(1,0.275,0.275,0.009774324,0.009280326);
   grae->SetPoint(2,-1.3,0.8451017);
   grae->SetPointError(2,0.25,0.25,0.009565215,0.009117269);
   grae->SetPoint(3,-0.825,0.902801);
   grae->SetPointError(3,0.225,0.225,0.008534866,0.007938325);
   grae->SetPoint(4,-0.35,0.9122798);
   grae->SetPointError(4,0.25,0.25,0.007562523,0.007028521);
   grae->SetPoint(5,0,0.5263292);
   grae->SetPointError(5,0.1,0.1,0.02036244,0.02028712);
   grae->SetPoint(6,0.35,0.926678);
   grae->SetPointError(6,0.25,0.25,0.007217084,0.006642243);
   grae->SetPoint(7,0.825,0.9130571);
   grae->SetPointError(7,0.225,0.225,0.008316415,0.007680628);
   grae->SetPoint(8,1.3,0.8750813);
   grae->SetPointError(8,0.25,0.25,0.009261063,0.008717575);
   grae->SetPoint(9,1.825,0.9130723);
   grae->SetPointError(9,0.275,0.275,0.007815588,0.007233083);
   grae->SetPoint(10,2.3,0.8861882);
   grae->SetPointError(10,0.2,0.2,0.01081888,0.01001084);
   grae->Draw("pe ");
   
   grae = new TGraphAsymmErrors(11);
   grae->SetName("Graph3");
   grae->SetTitle("Graph");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(33);
   grae->SetMarkerSize(1.6);
   grae->SetPoint(0,-2.3,0.7065956);
   grae->SetPointError(0,0.2,0.2,0.01772996,0.01715091);
   grae->SetPoint(1,-1.825,0.8109179);
   grae->SetPointError(1,0.275,0.275,0.01068691,0.01025135);
   grae->SetPoint(2,-1.3,0.7722769);
   grae->SetPointError(2,0.25,0.25,0.01093195,0.01057759);
   grae->SetPoint(3,-0.825,0.6654634);
   grae->SetPointError(3,0.225,0.225,0.01299889,0.0127572);
   grae->SetPoint(4,-0.35,0.7502384);
   grae->SetPointError(4,0.25,0.25,0.01118738,0.01086931);
   grae->SetPoint(5,0,0.3349915);
   grae->SetPointError(5,0.1,0.1,0.01899814,0.01953055);
   grae->SetPoint(6,0.35,0.7695416);
   grae->SetPointError(6,0.25,0.25,0.01114466,0.01078691);
   grae->SetPoint(7,0.825,0.6514684);
   grae->SetPointError(7,0.225,0.225,0.01333856,0.01310789);
   grae->SetPoint(8,1.3,0.8172578);
   grae->SetPointError(8,0.25,0.25,0.01068977,0.01023491);
   grae->SetPoint(9,1.825,0.8619767);
   grae->SetPointError(9,0.275,0.275,0.009397725,0.008891334);
   grae->SetPoint(10,2.3,0.6851995);
   grae->SetPointError(10,0.2,0.2,0.0151473,0.01476286);
   grae->Draw("pe ");
   
   TLegend *leg = new TLegend(2.761827e-321,3.364587e-321,2.761827e-321,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","#epsilon_{rec}","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph1","#epsilon_{rec}#epsilon_{sel}(isolation)","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph2","#epsilon_{rec}#epsilon_{sel}(Z veto)","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph3","#epsilon_{rec}#epsilon_{sel}#epsilon_{trig}","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   cPosA_cent1->Modified();
   cPosA_cent1->cd();
   cPosA_cent1->SetSelected(cPosA_cent1);
}
